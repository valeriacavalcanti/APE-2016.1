#include <stdio.h>

void print_vetor(int v[], int tamanho);

int main(){
    int numeros[] = {10,20,30,40,50,60};

    print_vetor(numeros, 6);
    print_vetor(numeros, 4);

    return 0;
}

void print_vetor(int v[], int tamanho){
    int i;

    for (i = 0; i < tamanho; ++i){
        printf("%d ", v[i]);
    }
    printf("\n");
}
