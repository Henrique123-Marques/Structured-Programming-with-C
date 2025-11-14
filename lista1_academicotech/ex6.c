#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 06 : Criar um programa que leia 5 valores inteiros e apresente a média aritmética dos valores.  */
	int a, b, c, d, e;
	printf("Digite 5 valores inteiros: \n");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	int media_aritmetica = (a + b + c + d + e)/5;
	printf("Media aritmetica = %d", media_aritmetica);
	return 0;
}
