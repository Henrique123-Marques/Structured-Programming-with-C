#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 20 : Criar um programa para ler a temperatura em em Celsius e apresentar a temperatura convertida  em fahrenheit. F=(9*C+160)/5.  */
	float celsius, fahrenheit;
	printf("Digite a temperatura em celsius: \n");
	scanf("%f", &celsius);

	fahrenheit = (9 * celsius + 160) / 5;
	printf("A temperatura digitada em celsius convertida em fahrenheit eh: %f", fahrenheit);
	return 0;
}
