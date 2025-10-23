#include <stdio.h>
#include <stdlib.h>


int main(){
    double *v1, *v2, produtoEscalar;
    int n, i;

    scanf("%d", &n);
    v1 = malloc(n * sizeof(double));
    v2 = malloc(n * sizeof(double));

    for (i = 0; i < n; i++){
        scanf("%lf", &v1[i]);
    }
    for (i = 0; i < n; i++){
        scanf("%lf", &v2[i]);
    }

    produtoEscalar = 0;

    for (i = 0; i < n; i++){
        produtoEscalar = produtoEscalar + (v1[i] * v2[i]);
    }

    printf("Resposta: %.2lf\n", produtoEscalar);
    free(v1);
    free(v2);
    return 0;
}

