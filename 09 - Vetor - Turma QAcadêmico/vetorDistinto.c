#include <stdio.h>
#define TAM 6

int main() {
    int v[TAM], i, n, achou, tAtual=0;

    do {
        do {
            achou=0;
            printf("\nDigite um numero: ");
            scanf("%d", &n);
            for (i=0;i<tAtual;i++){
                if (n==v[i]){
                    printf("\nEste numero já existe\n\n");
                    achou=1;
                }
            }
        } while (achou==1);
        v[tAtual]=n;
        tAtual++;
    } while (tAtual<TAM);
    for (i=0;i<TAM;i++){
        printf("\nv[%d]=%d", i, v[i]);
    }
    return 0;
}
