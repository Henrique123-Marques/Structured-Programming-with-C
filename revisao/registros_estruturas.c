#include "stdio.h"
#include "string.h"

struct Aluno{
	int ra;
	double nota;
};

typedef struct Aluno Aluno; //O COMANDO TYPEDEF MUDA O TIPO DA VARIAVEL DECLARADA, NESSE CASO DE DOUBLE PARA NOTA

int main(int argc, char const *argv[])
{
	Aluno turma[3];
	int i;
	double media = 0.0;
	for (i = 0; i < 3; i++){
		scanf("%d", &turma[i].ra);
		scanf("%lf", &turma[i].nota);
	}

	for (int i = 0; i < 3; i++){
		media = media + turma[i].nota;
	}
	media = media / 3;
	printf("A media da turma eh: %.2lfn", media);
	return 0;
}
