#include "stdio.h"

void troca(int *a, int *b);

int main(int argc, char const *argv[])
{
	/* 22 : Criar um programa para ler dois valores e efetuar a troca entre eles. Apresente os valores trocados.
 */
	int x = printf("Digite o valor de a: ");
	scanf("%d", &x);
	int y = printf("Digite o valor de b: ");
	scanf("%d", &y);

	troca(&x, &y);
	printf("Valores de x e y trocados = %d e %d", x, y);
	return 0;
}

void troca(int *a, int *b){
	int auxiliar;
	auxiliar = *a;
	*a = *b;
	*b = auxiliar;
}
