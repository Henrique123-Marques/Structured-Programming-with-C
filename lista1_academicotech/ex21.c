#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 21 : Criar um programa para ler uma temperatura em fahrenheit e apresentar a temperatura convertida em Celsius.
C=(f-32)*(5/9).*/

	float fahrenheit;
	printf("Leia a temperatura em fahrenheit: \n");
	scanf("%f", &fahrenheit);

	float celsius;
	celsius = (fahrenheit - 32) * (5.0/9.0);
	printf("temperatura convertida em celsius = %.2f", celsius);
	return 0;
}
