#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[]){
	FILE *arqin, *arqout;
	char aux;

	if (argc < 3)
	{
		printf("Informe os nomes dos arquivos ");
		return 1;
	}

	arqin = fopen(argv[1], "r");
	arqout = fopen(argv[2], "w");

	if (arqin == NULL || arqout == NULL){
		printf("Erro na leitura dos arquivos");
		return 1;
	}

	while(fscanf(arqin, "%c", &aux) != EOF){
		fprintf(arqout, "%c", aux);
	}
	fclose(arqin);
	fclose(arqout);
	return 0;
}
