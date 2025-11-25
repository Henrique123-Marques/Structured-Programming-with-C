#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* 02- Criar um programa que leia 3 variáveis. Apresente as variáveis em ordem crescente */
	int a, b, c;
	printf("Leia 3 numeros: ");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b && a > c && b > c){
		printf("Numeros em ordem: %d %d %d", c, b, a);
	} else if (a > b && a > c && c > b){
		printf("Numeros em ordem: %d %d %d", b, c, a);
	} else if (b > a && b > c && a > c){
		printf("Numeros em ordem: %d %d %d", c, a, b);
	} else if (b > a && b > c && c > a){
		printf("Numeros em ordem: %d %d %d", a, c, b);
	} else if (c > a && c > b && a > b){
		printf("Numeros em ordem: %d %d %d", b, a, c);
	} else if (c > a && c > b && b > a){
		printf("Numeros em ordem: %d %d %d", a, b, c);
	} else{
		printf("Caso nao analisado");
	}
	return 0;
}
