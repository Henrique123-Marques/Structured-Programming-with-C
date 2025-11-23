#include <stdio.h>

int main(int argc, char *argv[]) {
    char auxiliar;
    FILE *arquivoin;
    FILE *arquivoout;

    // 1. Verificar os argumentos PRIMEIRO
    if (argc < 3) {
        printf("Informe os nomes dos arquivos de entrada e saida na linha de comando.\n");
        printf("Exemplo de uso: ./seu_programa arquivoEntrada.txt arquivoSaida.txt\n");
        return 1; // Sai se não houver argumentos suficientes
    }

    // 2. Abrir os arquivos USANDO os nomes fornecidos nos argumentos
    arquivoin = fopen(argv[1], "r");
    arquivoout = fopen(argv[2], "w");

    // 3. Verificar se a abertura foi bem-sucedida
    if (arquivoin == NULL || arquivoout == NULL) {
        printf("Problema ao abrir os arquivos especificados. Verifique se o arquivo de entrada existe.\n");
        return 1; // Sai se houver problema na abertura
    }

    // 4. Copiar o conteúdo (seu loop while estava correto)
    while(fscanf(arquivoin, "%c", &auxiliar) != EOF) {
        fprintf(arquivoout, "%c", auxiliar);
    }

    // 5. Fechar os arquivos
    fclose(arquivoin);
    fclose(arquivoout);

    printf("Conteudo copiado com sucesso.\n");

    return 0;
}
