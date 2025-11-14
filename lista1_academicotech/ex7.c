#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* 07 : Criar um programa que calcule o volume de uma circunferência. Sendo: área=PI*Raio^2. */
	float pi = 3.14;
	float raio, area;

	printf("Digite o raio da circunferencia:\n");
	scanf("%f", &raio);
	area = pi * raio * raio;
	printf("O volume da circunferencia eh: %.2f", area);
	return 0;
}
