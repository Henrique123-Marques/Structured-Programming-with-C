/*Escreva um programa que eleve todos os elementos de um vetor ao quadrado, salvando os valores no próprio vetor.
 Use as funções do exercício anterior para a leitura dos valores e exibição do vetor antes e depois da operação que eleva os valores ao quadrado,
 que necessariamente deve ser feita numa função chamada square_vec.

Importante: este programa deve usar as funções: square_vec(vetor, N); show_vec(vetor, N); read_vec(vetor, N);

Exemplo de execução:
Digite o tamanho do vetor:
2
Digite os elementos do vetor:
23
27

O vetor é: 23 27
O novo vetor é: 529 729              */

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
	printf("O vetor eh:\n");
	for (int i = 0; i < N; i++){
		printf("%d\n", vetor[i]);
	}
	printf("\n");
	return 0;
}

int square_vec(int *vetor, int N){
	for (int i = 0; i < N; i++){
		vetor[i] = vetor[i] * vetor[i];
	}
	return 0;
}

int main(){
	int vetor[10];
	int N;
	printf("Digite o tamanho do vetor: \n");
	if (scanf("%d", &N) != 1 || N <= 0 || N > 10){
		printf("tamanho invalido\n");
		return 1;
	}
	if (read_vec(vetor, N) != 0){
		return 1;
	}

	show_vec(vetor, N);
	square_vec(vetor, N);
	printf("O novo vetor eh: ");
	show_vec(vetor, N);
	return 0;
}
