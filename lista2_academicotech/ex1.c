#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 01- Criar um programa que leia 4 notas de um aluno. Apresente o resultado de acordo com a média das notas:
a.    APROVADO - se média maior ou igual a 8,5;
b.    EXAME - se média menor que 8,5 e maior que 6;
c.     RETIDO -  se média menor ou igual a 6; */

	float nota1, nota2, nota3, nota4;
	printf("Digite as notas do aluno: ");
	scanf("%f%f%f%f", &nota1,&nota2,&nota3,&nota4);
	float media;
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("A media eh: %.2f\n", media);

	if (media >= 8.5){
		printf("APROVADO");
	} else if (media < 8.5 && media > 6){
		printf("EXAME");
	} else if (media < 6){
		printf("RETIDO");
	}


	return 0;
}
