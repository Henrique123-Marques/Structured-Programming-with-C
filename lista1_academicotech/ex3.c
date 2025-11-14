#include <stdio.h>

int main(){
	/* 03 : Criar um programa para ler um valor e apresentar seu quadrado. */
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	int quadrado = numero * numero;
	printf("Quadrado do numero: %d\n", quadrado);
	return 0;
}
