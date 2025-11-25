#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int largura;
    int altura;
    int max_val;
    unsigned char **dados;  // matriz de pixels [altura][largura]
} ImagemPGM;

typedef struct {
    int largura;
    int altura;
    int **pesos;            // matriz de pesos inteiros
    int centro_x, centro_y; // coordenadas do centro do kernel
} Filtro;

// Função auxiliar: aloca matriz dinâmica de unsigned char
unsigned char **aloca_matriz_uc(int altura, int largura) {
    unsigned char **m = malloc(altura * sizeof(unsigned char *));
    if (!m) return NULL;
    for (int i = 0; i < altura; i++) {
        m[i] = malloc(largura * sizeof(unsigned char));
        if (!m[i]) {
            // liberar memória já alocada
            for (int j = 0; j < i; j++) free(m[j]);
            free(m);
            return NULL;
        }
    }
    return m;
}

// Função auxiliar: aloca matriz dinâmica de int
int **aloca_matriz_int(int altura, int largura) {
    int **m = malloc(altura * sizeof(int *));
    if (!m) return NULL;
    for (int i = 0; i < altura; i++) {
        m[i] = malloc(largura * sizeof(int));
        if (!m[i]) {
            for (int j = 0; j < i; j++) free(m[j]);
            free(m);
            return NULL;
        }
    }
    return m;
}

// Libera memória da imagem
void libera_imagem(ImagemPGM *img) {
    if (img->dados) {
        for (int i = 0; i < img->altura; i++)
            free(img->dados[i]);
        free(img->dados);
        img->dados = NULL;
    }
}

// Libera memória do filtro
void libera_filtro(Filtro *f) {
    if (f->pesos) {
        for (int i = 0; i < f->altura; i++)
            free(f->pesos[i]);
        free(f->pesos);
        f->pesos = NULL;
    }
}

// Lê imagem PGM (formato P2 - ASCII)
int le_imagem_pgm(const char *nome_arq, ImagemPGM *img) {
    FILE *arq = fopen(nome_arq, "r");
    if (!arq) {
        fprintf(stderr, "Erro ao abrir arquivo de imagem: %s\n", nome_arq);
        return 0;
    }

    char magic[3] = {0};
    fscanf(arq, "%2s", magic);
    if (strcmp(magic, "P2") != 0) {
        fprintf(stderr, "Formato PGM inválido (esperado P2)\n");
        fclose(arq);
        return 0;
    }

    // Ignora comentários
    int c;
    while ((c = fgetc(arq)) == '#') {
        while (fgetc(arq) != '\n');  // pula linha de comentário
    }
    ungetc(c, arq);

    fscanf(arq, "%d %d", &img->largura, &img->altura);
    fscanf(arq, "%d", &img->max_val);

    img->dados = aloca_matriz_uc(img->altura, img->largura);
    if (!img->dados) {
        fclose(arq);
        return 0;
    }

    for (int i = 0; i < img->altura; i++) {
        for (int j = 0; j < img->largura; j++) {
            int valor;
            if (fscanf(arq, "%d", &valor) != 1) {
                fprintf(stderr, "Erro ao ler pixel (%d,%d)\n", i, j);
                libera_imagem(img);
                fclose(arq);
                return 0;
            }
            img->dados[i][j] = (unsigned char)valor;
        }
    }

    fclose(arq);
    return 1;
}

// Lê filtro a partir de arquivo texto
int le_filtro(const char *nome_arq, Filtro *f) {
    FILE *arq = fopen(nome_arq, "r");
    if (!arq) {
        fprintf(stderr, "Erro ao abrir arquivo de filtro: %s\n", nome_arq);
        return 0;
    }

    if (fscanf(arq, "%d %d", &f->largura, &f->altura) != 2) {
        fclose(arq);
        return 0;
    }

    // Verifica se dimensões são ímpares (necessário para ter centro bem definido)
    if (f->largura % 2 == 0 || f->altura % 2 == 0) {
        fprintf(stderr, "Dimensões do filtro devem ser ímpares!\n");
        fclose(arq);
        return 0;
    }

    f->centro_x = f->largura / 2;
    f->centro_y = f->altura / 2;

    f->pesos = aloca_matriz_int(f->altura, f->largura);
    if (!f->pesos) {
        fclose(arq);
        return 0;
    }

    for (int i = 0; i < f->altura; i++) {
        for (int j = 0; j < f->largura; j++) {
            if (fscanf(arq, "%d", &f->pesos[i][j]) != 1) {
                fprintf(stderr, "Erro ao ler peso do filtro\n");
                libera_filtro(f);
                fclose(arq);
                return 0;
            }
        }
    }

    fclose(arq);
    return 1;
}

// Função principal de convolução
void convolucao(const ImagemPGM *entrada, const Filtro *filtro, ImagemPGM *saida) {
    int h = entrada->altura;
    int w = entrada->largura;
    int kh = filtro->altura;
    int kw = filtro->largura;
    int cx = filtro->centro_x;
    int cy = filtro->centro_y;

    // A saída tem as mesmas dimensões da entrada
    saida->altura = h;
    saida->largura = w;
    saida->max_val = 255;
    saida->dados = aloca_matriz_uc(h, w);

    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            long long soma = 0;

            // Percorre o kernel
            for (int ky = 0; ky < kh; ky++) {
                for (int kx = 0; kx < kw; kx++) {
                    int iy = y + ky - cy;
                    int ix = x + kx - cx;

                    // Só considera pixels dentro da imagem
                    if (iy >= 0 && iy < h && ix >= 0 && ix < w) {
                        soma += (long long)filtro->pesos[ky][kx] * entrada->dados[iy][ix];
                    }
                    // Caso contrário, ignora (equivale a multiplicar por 0)
                }
            }

            // Clamp para [0, 255]
            if (soma < 0) soma = 0;
            if (soma > 255) soma = 255;

            saida->dados[y][x] = (unsigned char)soma;
        }
    }
}

// Escreve imagem PGM no formato P2 (ASCII)
void escreve_pgm(const ImagemPGM *img) {
    printf("P2\n");
    printf("%d %d\n", img->largura, img->altura);
    printf("%d\n", img->max_val);

    for (int i = 0; i < img->altura; i++) {
        for (int j = 0; j < img->largura; j++) {
            printf("%d", img->dados[i][j]);
            if (j < img->largura - 1)
                printf(" ");
            else
                printf("\n");
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s <imagem.pgm> <filtro.txt>\n", argv[0]);
        return 1;
    }

    ImagemPGM entrada = {0};
    ImagemPGM saida = {0};
    Filtro filtro = {0};

    if (!le_imagem_pgm(argv[1], &entrada)) {
        fprintf(stderr, "Falha ao ler imagem\n");
        return 1;
    }

    if (!le_filtro(argv[2], &filtro)) {
        fprintf(stderr, "Falha ao ler filtro\n");
        libera_imagem(&entrada);
        return 1;
    }

    convolucao(&entrada, &filtro, &saida);

    // Imprime resultado no formato PGM
    escreve_pgm(&saida);

    // Libera memória
    libera_imagem(&entrada);
    libera_imagem(&saida);
    libera_filtro(&filtro);

    return 0;
}
