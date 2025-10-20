/*Escreva um programa em C que verifica se um número digitado pelo usuário é primo. Este programa deve ser baseado em uma função recursiva decideSePrimo(). Esta função recebe como parâmetros 2 valores: o número testado e um divisor. Então, retorna 1 se for primo ou 0 caso contrário. A função recursiva considera 3 situações:
(i) se divisor ==1, retorna 1
(ii) se número%divisor==0, retorna 0
(iii)caso contrário, retorna decideSePrimo(número, divisor-1)


A função decideSePrimo deve ter a seguinte estrutura:

int decideSePrimo(int num, int div){
     //Código da Função
}


Exemplo de execução:
Digite um valor inteiro: 229
O número 229 é primo.

 */

#include <stdio.h>

int decideSePrimo(int num, int div);

int main() {
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    int divisor = n / 2;

    if (decideSePrimo(n, divisor) == 1) {
        printf("O numero %d eh primo.\n", n);
    } else {
        printf("O numero %d nao eh primo.\n", n);
    }

    return 0;
}

int decideSePrimo(int num, int div) {
    if (num <= 1) {
        return 0;
    }
    if (div == 1) {
        return 1;
    }
    if (num % div == 0) {
        return 0;
    }
    return decideSePrimo(num, div - 1);
}
