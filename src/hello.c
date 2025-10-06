#include <stdio.h>

int main(){
    float n, soma = 0.0;
    int i = 1;
    do{
        n = printf("Digite valores positivos ou -1 para sair:\n");
        scanf("%f", &n);
        if (i >= 0){
           soma += n;
           i++;
        }
    }while(n != -1);
    if (i > 0){
        float media = soma / i;
        printf("A media eh:%.6f\n", media);
    } else {
        printf("Nenhum valor digitado.\n");
    }
    return 0;
}
