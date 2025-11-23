#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 16 : Criar um programa que apresente a conversão de reais em dólar.  */
	float reais, dolar;
	printf("Digite um valor em reais\n");
	scanf("%f", &reais);

	dolar = reais / 5.4; //Cotacao nov 2025
	printf("O valor em dolares eh: %f \n", dolar);

	return 0;
}
