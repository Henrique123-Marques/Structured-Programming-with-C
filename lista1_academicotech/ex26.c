#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 26 : Criar um programa que apresente o caractere digitado pelo usuário */
	char caractere;
	printf("Digite um caractere: ");
	scanf("%c", &caractere);

	printf("Caractere digitado = %c", caractere);
	return 0;
}
