#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 29 : Criar um programa que calcule o peso ideal para uma mulher. Fórmula de peso ideal = 62.1 * altura - 44.7 */
	float peso_ideal, altura;
	printf("Leia a altura da mulher = ");
	scanf("%f", &altura);

	peso_ideal = 62.1 * altura - 44.7;
	printf("O peso ideal para essa mulher eh = %.2f KG", peso_ideal);

	return 0;
}
