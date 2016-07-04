#include<stdio.h>
#define TAM 4

int main(){
    int i, vetor1[TAM] = {};
    int vetor2[TAM] = {10,20,30,40};
    int vetor3[TAM] = {10,20};
    int vetor4[] = {10,20,30,40,50,60};

    printf("Vetor1: ");
    for (i = 0; i < TAM; ++i){
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor2: ");
    for (i = 0; i < TAM; ++i){
        printf("%d ", vetor2[i]);
    }

    printf("\nVetor3: ");
    for (i = 0; i < TAM; ++i){
        printf("%d ", vetor3[i]);
    }

    printf("\nVetor4: ");
    for (i = 0; i < 6; ++i){
        printf("%d ", vetor4[i]);
    }

    return 0;
}
