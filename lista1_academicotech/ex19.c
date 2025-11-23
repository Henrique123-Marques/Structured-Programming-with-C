#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 19 : Criar um programa ler um valor e apresente o dobro o triplo e o quádruplo. */
	int valor;
	printf("Digite um valor:");
	scanf("%d", &valor);
	printf("O dobro, triplo e quadruplo do valor eh, respectivamente: %d %d %d", valor*valor, valor*valor*valor, valor*valor*valor*valor);
	return 0;
}
