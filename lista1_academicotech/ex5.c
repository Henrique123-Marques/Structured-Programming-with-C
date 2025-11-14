#include "stdio.h"

int main(int argc, char const *argv[])
{
	/*05 : Criar um programa que leia nome e sobrenome e apresente o nome completo. */
	char nome[100], sobrenome[100];
	printf("Digite seu nome e sobrenome: \n");
	scanf("%s%s", &nome, &sobrenome);
	printf("Nome Completo: %s %s", nome, sobrenome);
	return 0;
}
