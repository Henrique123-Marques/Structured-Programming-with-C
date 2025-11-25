#include "stdio.h"

int main(int argc, char const *argv[])
{
	/*30 : Criar um programa que calcule a área de um triangulo. Sendo a fórmula = (lado1+lado2+lado3)/2.*/

	float area_triangulo, lado1, lado2, lado3;

	printf("Insira os lados do triangulo = ");
	scanf("%f %f %f", &lado1, &lado2, &lado3);

	area_triangulo = (lado1 + lado2 + lado3) / 2;
	printf("A area do triangulo eh = %.2f", area_triangulo);
	return 0;
}
