#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 12 : Criar um programa calculo de salário sendo.
	Salário bruto = horas trab*valor hr...  total de descontos = (perc de desc/100)*sal bruto... salário liq=sal bruto-total de desc. */

	float salario_bruto, horas_trab, valor_hr, total_desc, perc_desc, salario_liq;

	printf("Digite as horas trabalhadas e o valor por hora: \n");
	scanf("%f%f", &horas_trab, &valor_hr);
	salario_bruto = horas_trab * valor_hr;
	printf("O salario bruto eh: %f \n", salario_bruto);

	printf("Digite o percentual de desconto: \n");
	scanf("%f", &perc_desc);
	total_desc = (perc_desc/100) * salario_bruto;
	printf("O percentual de desconto eh: %f \n", total_desc);

	salario_liq = salario_bruto - total_desc;
	printf("O salario liquido eh: %fn", salario_liq);

	return 0;
}
