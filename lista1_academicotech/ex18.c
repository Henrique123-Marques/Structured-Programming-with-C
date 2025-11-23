#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 18 : Criar um programa apresente a media do bimestre sabendo que a segunda prova tem peso 2 e a media é por 3.*/

	int nota1, nota2, nota3;
	printf("Digite as notas para o calculo da media do bimestre: \n ");
	scanf("%d%d%d", &nota1, &nota2, &nota3);
	int media;
	media = (nota1 + (nota2 * 2) + nota3) / 3;
	printf("A media eh: %d\n", media);
	return 0;
}
