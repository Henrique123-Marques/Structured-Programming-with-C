#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 15 : Criar um programa que leia 3 valores e apresente o quadrado de sua soma. */
	int n1, n2, n3;
	printf("Digite 3 valores inteiros: ");
	scanf("%d%d%d", &n1, &n2, &n3);
	int soma = n1 + n2 + n3;
	int nova_soma = soma * soma;
	printf("O quadrado da soma eh: %d \n", nova_soma);

	return 0;
}
