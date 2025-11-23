#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 14 : Criar um programa que leia 3 valores e apresente a soma dos seus quadrados. */
	int n1, n2, n3;
	printf("Digite 3 valores inteiros: \n");
	scanf("%d%d%d", &n1, &n2, &n3);

	int soma = (n1 * n1) + (n2 * n2) + (n3 * n3);
	printf("A soma dos seus quadrados eh: %d\n", soma);
	return 0;
}
