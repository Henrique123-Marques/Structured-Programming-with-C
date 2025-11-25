#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 27 : Criar um programa que leia um valor real e apresente o valor arredondado. */
	float valor;
	printf("Digite um valor com casas decimais: ");
	scanf("%f", &valor);

	printf("Esse valor arredondado eh: %.1f", valor);
	return 0;
}
