#include <stdio.h>

int main(){
	/* Exercício 01 : Criar um programa que apresente o resultado da média, sendo R <-- (A + B + ( C * 2 )) / 4. */
	int a, b, c;
	float media;
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	printf("Digite o valor de c: ");
	scanf("%d", &c);

	media = (a + b + (c * 2)) / 4;
	printf("A media é %.2f\n", media);

	return 0;
}
