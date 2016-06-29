#include <stdio.h>
#define TAM 10

int main(){
    int i, numeros[TAM];

    for (i = 0; i < TAM; i++){
        numeros[i] = -1;
    }

    for (i = 0; i < TAM; ++i){
        printf("%d: %d\n", i, numeros[i]);
    }

    return 0;
}
