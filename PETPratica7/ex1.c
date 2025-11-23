#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( int argc, char *argv[]){
    int n, seed;
    FILE *arq;

    printf("Digite a quantidade de números:\n");
    scanf("%d", &n);

    printf("Digite o valor da seed:\n");
    scanf("%d", seed);

    srand(seed); //inicia o gerador de numeros com a seed informada

    arq = fopen("exemplo.txt", "w");
    if (arq == NULL){
        printf("Erro ao criar o arquivo\n");
        return 1;
    }

    printf("Números gerados: ");
    for (int i = 0; i < n; i++){
        int valor = rand() % 11;
        fprintf(arq, "%d ", valor);
        printf("%d ", valor);
    }
    printf("\n");

    //Reabrir o arquivo, ler os numeros e calcular a media
    arq = fopen("exemplo.txt", "r");
    if (arq == NULL){
        printf("Erro ao abrir o arquivo para leitura!");
        return 1;
    }

    int numero;
    double soma = 0.0;
    int contador = 0;

    while(fscanf(arq, "%d ", &numero) == 1){
        soma += numero;
        contador++;
    }

    fclose(arq);

    //calculo da media
    if (contador > 0){
        double media = soma / contador;
        printf("Media = %.2f\n", media);
    } else {
        printf("Nenhum numero foi lido do arquivo \n");
    }

    return 0;
}
