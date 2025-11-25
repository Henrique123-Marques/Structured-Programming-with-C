#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 28 : Criar um programa que repita uma operação sem a utilização de uma função de looping (repetição). */
	int a = 5, b = 6;
	int soma = a + b;
	printf("A soma eh: %d\n", soma);

	int *auxiliar = &soma;
	printf("Conteudo da variavel soma, repetindo a soma usando como ponteiro = %d", *auxiliar);

	return 0;
}
