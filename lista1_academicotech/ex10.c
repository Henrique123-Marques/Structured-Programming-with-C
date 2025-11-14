#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* 10 : Criar um programa que calcule o volume de uma caixa retangular. Vol = altura*comprimento*largura. */
	float volume, altura, comprimento, largura;

	printf("Digite a altura, comprimento e largura da caixa: ");
	scanf("%f%f%f", &altura, &comprimento, &largura);
	volume = altura * comprimento * largura;
	printf("O volume da caixa retangular eh: %.2f", volume);

	return 0;
}
