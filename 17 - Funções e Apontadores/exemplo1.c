#include <stdio.h>

int somar(int n1, int n2);
void trocar(int *n1, int *n2);
void bolha(int vetor[], int tamanho);
void print_vetor(int vetor[], int tamanho);

int main(){
    int num1 = 10, num2 = 20;
    int vetor[] = {31, 20, 7, 12, 50, 18};

    printf("%d %d %d\n", num1, num2, somar(num1, num2));
    trocar(&num1, &num2);
    printf("%d %d %d\n", num1, num2, somar(num1, num2));

    print_vetor(vetor, 6);
    bolha(vetor, 4);
    print_vetor(vetor, 6);

    return 0;
}

int somar(int n1, int n2){
    return n1 + n2;
}

void trocar(int *n1, int *n2){
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void bolha(int vetor[], int tamanho){
    int i, existe_troca;

    do{
        existe_troca = 0;
        for (i = 0; i < tamanho - 1; ++i){
            if (vetor[i] > vetor[i + 1]){
                trocar(&vetor[i], &vetor[i + 1]);
                existe_troca = 1;
            }
        }
    }while (existe_troca == 1);
}

void print_vetor(int vetor[], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
