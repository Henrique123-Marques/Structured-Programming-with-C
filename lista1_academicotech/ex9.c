#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* 09 : Criar um programa que calcule a quantidade de litros gastos em uma viagem em que o automóvel faz 12 KM por litro.
	 *  Sendo as fórmulas. Distância = tempo gasto * valocidade média... Litros Gastos = distancia /12.*/
	float distancia, tempo, velocidade_media, litros_gastos;

	printf("Digite o tempo gasto da viagem: ");
	scanf("%f", &tempo);
	printf("Digite a valocidade media: ");
	scanf("%f", &velocidade_media);

	distancia = tempo * velocidade_media;
	printf("A distancia eh: %.2f \n", distancia);

	litros_gastos = distancia / 12;
	printf("A quantidade de litros gastos eh: %.2f", litros_gastos);
	return 0;
}
