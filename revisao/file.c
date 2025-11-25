#include "stdio.h"

/*int main(int argc, char const *argv[])
{
	float *memoria;
	float a = 90.5;
	memoria = &a; //Operador & retorna ENDEREÇO DE MEMORIA DE UM VARIAVEL
	printf("conteudo de memoria = %f\n", *memoria); //Operador * acessa CONTEUDO do endereco indicado pelo ponteiro
	printf("conteudo de memoria = %p", memoria);

	return 0;
} */

/*
VALOR NULL
int main(){
	double *a = NULL, *b = NULL, c = 3;
	a = &c;

	if (a != NULL){
		b = a;
		printf("Numero %lf", *b);
	}
	return 0;
}*/

/* PASSAGEM DE PARAMENTOS - NESSE CASO NAO TROCA OS VALORES, POIS NAO SE USA PONTEIROS e ALOCACAO
void nao_troca(int a, int b);

int main(int argc, char const *argv[]){
	int x = 4, y = 5;
	nao_troca(x, y);
	printf("x = %d e y = %d", x,y);
	return 0;
}

void nao_troca(int a, int b){
	int auxiliar;
	auxiliar = a;
	a = b;
	b = auxiliar;
}*/

/*
//PASSAGEM POR REFERENCIA - NESSE CASO OCORRE A TROCA DOS VALORES USANDO PONTEIROS E ENDERECAMENTO DE MEMORIA
void troca(int *a, int *b);

int main(int argc, char const *argv[])
{
	int x = 4, y = 5;
	troca(&x, &y);
	printf("x = %d e y = %d", x,y);
	return 0;
}

void troca(int *a, int *b){
	int auxiliar;
	auxiliar = *a;
	*a = *b;
	*b = auxiliar;
}*/

//REGISTROS
struct Coordenadas
{
	double x;
	double y;

};

int main(int argc, char const *argv[])
{
	/* Comandos para o registro declarado anteriormente */
	struct Coordenadas c1, c2, *c3;
	c3 = &c1;
	printf("valor de c3 = %lf", c3);
	return 0;
}
