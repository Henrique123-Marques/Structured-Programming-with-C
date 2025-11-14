#include "stdio.h"

int main(int argc, char const *argv[])
{
	/*04 : Criar um programa para ler dois valores e apresentar a soma. */
	int a, b, soma;
	printf("Insira os valores a e b para somar: ");
	scanf("%d%d", &a, &b);
	soma = a + b;
	printf("A soma eh: %d\n", soma);
	return 0;
}
