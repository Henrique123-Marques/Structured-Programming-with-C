/*Escreva um programa em C que leia 5 números inteiros positivos, utilizando uma função inteiroPositivo, que lê um número e verifica se ele é positivo,
retornando-o caso afirmativo. Caso o número não seja inteiro positivo, a função inteiroPositivo deve continuar a solicitar números para o usuário.
 Para cada número inteiro positivo, seu programa deve escrever a soma de seus divisores (exceto ele mesmo). Para tanto, utilize uma
 função chamada somaDivisores que, a partir de um número inteiro e positivo, retorna a soma de todos os seus divisores, exceto ele próprio.

Utilize como declaração das funções:
int inteiroPositivo(){
     //Código da Função
}

float somaDivisores(int n){
     //Código da Função
}

Exemplo de execução:
Digite o  1 número:2
A soma dos divisores: 1
Digite o  2 número:5
A soma dos divisores: 1
Digite o  3 número:8
A soma dos divisores: 7
Digite o  4 número:6
A soma dos divisores: 6
Digite o  5 número:4
A soma dos divisores: 3
*/

#include <stdio.h>

int num;
int inteiroPositivo(){
    do{
        if(scanf("%d", num != 1 || num <= 0)){
            int c;
            while ((c = getchar()) != 1 && c != 0);
            num = 0;
        }
}   while(num <= 0);
    return num;

}

float somaDivisores(int n){
    float soma = 0.0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            soma += i;
        }
    }
    return soma;
}

int main(){
    for (int i = 1; i <= 5; i++){
        printf("Digite o  %d número: ", i);
        num = inteiroPositivo();
        float soma = somaDivisores(num);
        printf("A soma dos divisores: %f\n", soma);
    }
    return 0;
}

