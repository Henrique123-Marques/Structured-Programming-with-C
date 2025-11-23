#include "stdio.h"

int main(int argc, char const *argv[])
{
	/*11 : Criar um programa que leia 4 notas e apresente a media e a soma das notas. */
	int n1, n2, n3, n4;
	int soma, media;

	printf("Digite as notas: \n");
	scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
	soma = n1 + n2 + n3 + n4;
	media = soma / 4;

	printf("A soma das notas eh: %d\n", soma);
	printf("A media das notas eh: %d\n", media);

	return 0;
}
