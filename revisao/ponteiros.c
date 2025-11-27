#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
	int *p = malloc(5 * sizeof(int));
	if (p == NULL)
	{
		printf("Erro na alocacao de memoria\n");
		return 1;
	}
	for (int i = 0; i < 5; ++i)
	{
		p[i] = i * 5;
	}

	int *newp = realloc(p, 10 * sizeof(int));

	if (newp == NULL){
		printf("Erro na alocacao de memoria");
		free(p);
		return 1;
	}

	p = newp;

	for (int i = 0; i < 10; ++i){
		p[i] = -(i - 5) * 5;
	}

	for (int i = 0; i < 10; ++i){
		printf(" %d", p[i]);
	}
	printf(" \n");
	free(p);
	return 0;
}
