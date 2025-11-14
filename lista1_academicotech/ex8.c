#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 08 : Criar um programa que leia 4 valores e apresente em distributiva os valores somados e multiplicados.  */
	int n1, n2, n3, n4;
	printf("Digite 4 valores: \n");
	scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
	int distributiva = (n1 + n2 + n3 + n4 + (n1 * n2 * n3 * n4));
	printf("Em distributiva os valores somados e multiplicados eh: %d", distributiva);
	return 0;
}
