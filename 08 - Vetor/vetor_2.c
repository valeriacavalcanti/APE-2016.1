#include <stdio.h>
#define TAM 10

int main(){
    int i, numeros[TAM], soma = 0, qtde = 0;
    float media;

    for (i = 0; i < TAM; ++i){
        printf("Informe o %d%c numero: ", i + 1, 167);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = (float)soma/TAM;

    printf("Valores acima da media: ");
    for (i = 0; i < TAM; ++i){
        if (numeros[i] > media){
            ++qtde;
            printf("%d ", numeros[i]);
        }
    }

    printf("\nQuantidade(%.2f): %d\n", media, qtde);
/*
    printf("Valores acima da media: ");
    for (i = 0; i < TAM; ++i){
        if (numeros[i] > media){
            printf("%d ", numeros[i]);
        }
    }
*/

    printf("Ordem inversa\n");
    for (i = TAM - 1; i >= 0; --i){
        printf("%d: %d\n", i, numeros[i]);
    }

    printf("Posicao dos elementos acima da media: ");
    for (i = 0; i < TAM; i++){
        if (numeros[i] > media){
            printf("%d ", i + 1);
        }
    }

    return 0;
}
