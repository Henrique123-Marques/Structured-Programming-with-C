/*Escreva um programa que exiba o conteúdo de um vetor de inteiros digitado pelo usuário.
 A entrada dos valores e a exibição devem ser feitas usando duas funções separadas.

Exemplo:
read_vec(vetor, N); // função armazena valores em vetor[]
show_vec(vetor,N); // função exibe valores de vetor[]

Exemplo de execução:
Digite o tamanho do vetor:
3
Digite os elementos do vetor:
3
2
1
O vetor é:
3 2 1*/

#include <stdio.h>

int read_vec(int *vetor, int N){
	for (int i = 0; i < N; i++){
		printf("Digite os elementos do vetor: ", i);
		if (scanf("%d", &vetor[i]) != 1){
			printf("Entrada invalida\n");
			return 1;
		}
	}
	return 0;
}

int show_vec(int *vetor, int N){
	printf("O vetor eh: ");
	for (int i = 0; i < N; i++){
		printf("%d \n", vetor[i]);
	}
	return 0;
}

int main(){
	int vetor[10];
	int N;
	printf("Digite o tamanho do vetor: ");
	if (scanf("%d", &N) != 1 || N <= 0 || N > 10){
		printf("tamanho invalido\n");
		return 1;
	}
	if (read_vec(vetor, N) != 0){
		return 1;
	}
	show_vec(vetor, N);
	return 0;
}
