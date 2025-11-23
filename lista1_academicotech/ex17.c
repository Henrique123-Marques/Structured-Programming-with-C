#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 17 : Criar um programa apresente a conversão de dólar para reais.  */
	float dolares;
	printf("Digite o valor em dolares: \n");
	scanf("%f", &dolares);

	float reais;
	reais = dolares * 5.4;
	printf("O valor convertido em reais eh: %f", reais);
	return 0;
}
