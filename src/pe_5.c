/*Os antigos gregos são conhecidos por sua superstição e busca pela perfeição. Um belo exemplo disso é que, na antiguidade,
 *os seus generais estudavam a geometria de uma cidade alvo antes de atacá-la. Os seus meticulosos matemáticos analisavam cada uma das coordenadas
 *que demarcavam o território da cidade alvo, calculavam seu perímetro e, de acordo com o valor obtido, decidiam se esta cidade deveria ou não ser atacada.

Para os antigos gregos, o perímetro (arredondado) de uma cidade indicava se ela havia sido ou não construída com o auxílio dos deuses. Assim,
se número obtido no cálculo do perímetro fosse um número perfeito e triangular, a cidade não era atacada;
caso contrário, como não havia influência dos deuses, eles atacavam a cidade ou pensavam mais um pouco.

Sabidamente, um número inteiro positivo é dito triangular se é igual à soma de todos os inteiros positivos menores que um outro inteiro positivo m.
Por exemplo, 6 = 1 + 2 + 3 e 10 = 1 + 2 + 3 + 4 são números triangulares.
Um número inteiro positivo, por sua vez, é dito perfeito se a soma de seus divisores próprios (isto é, os divisores menores que ele mesmo) é igual ao próprio número.
Por exemplo, 6 é um número perfeito, pois seus divisores próprios são 1, 2 e 3 e 1 + 2 + 3 = 6.

Tarefa:
Neste laboratório, seu objetivo é ajudar os generais gregos. Para tanto, você deve escrever um programa em linguagem C, que avalia se uma determinada cidade deve ou
 não ser atacada. Seu programa receberá um número inteiro representando o valor do perímetro da cidade alvo e deve determinar se seu perímetro é triangular e/ou
 perfeito.
A entrada consiste de um número inteiro representando o perímetro de uma possível cidade alvo. Todos os números da entrada serão representados com o tipo de dado
 int

A saída do programa deve ser:
"Paz", quando o perímetro é perfeito e triangular ao mesmo tempo;
"Pensar", quando o perímetro não é perfeito mas é triangular ou quando este perímetro é perfeito mas não é triangular;
"Atacar", quando o perímetro não é triangular, nem perfeito.
 */

#include <stdio.h>
#include <math.h>

//Funcao para verificar se um numero é triangular
int isTriangular(int n){
	double m = (-1 + sqrt(1 + 8.0 * n)) / 2.0;
	return m == (int)m && m > 0;
}

//Funcao para verificar se um numero é perfeito
int isPerfeito(int n){
	int soma = 1; //divisor fixo
	for (int i = 2; i <= n; i++){
		if (n % i == 0){
			soma += i;
		}
	}
	return soma == n && n > 1;
}

int main()
{
	int perimetro = printf("Digite o perimetro: \n");
	scanf("%d", &perimetro);

	int triangular = isTriangular(perimetro);
	int perfeito = isPerfeito(perimetro);

	if (perimetro && triangular){
		printf("Paz\n");
	} else if (perfeito || triangular){
		printf("Pensar\n");
	} else {
		printf("Atacar\n");
	}
	return 0;
}
