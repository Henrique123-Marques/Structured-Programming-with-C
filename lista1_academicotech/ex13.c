#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 13 : Criar um programa que leia o nome completo e apresente uma saudação e o nome completo. */
	char nome = printf("Digite seu nome completo:\n");
	scanf("%s", &nome);

	printf("Saudacoes %s\n", &nome);
	return 0;
}
