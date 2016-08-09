#include <stdio.h>

typedef struct {
    int dia, mes, ano;
} Data;

void print_data(Data dt);
void print_vetor(Data vdt[], int tamanho);
int data_cmp(Data d1, Data d2);
Data data_maior(Data vdt[], int tamanho);
Data data_menor(Data vdt[], int tamanho);

int main(){
    Data vetor[4];
    int i;

    for (i = 0; i < 4; ++i){
        printf("Informe a %d data: ", i + 1);
        scanf("%d/%d/%d", &vetor[i].dia, &vetor[i].mes, &vetor[i].ano);
    }

    print_vetor(vetor, 4);

    print_data(data_menor(vetor, 4));

    return 0;
}

void print_data(Data dt){
    printf("%d/%d/%d\n", dt.dia, dt.mes, dt.ano);
}

void print_vetor(Data vdt[], int tamanho){
    int i;

    for (i = 0; i < tamanho; ++i){
        print_data(vdt[i]);
    }
}

int data_cmp(Data d1, Data d2){
    if (d1.ano < d2.ano) return -1;
    else if (d1.ano > d2.ano) return 1;
    else return 0;
}

/**
    Retorno: Data
    Objetivo: Retornar a maior data (mais recente) do vetor.
    Parâmetros:
        - Vetor de datas (Data vtd[])
        - Tamanho do vetor (int tamanho)
*/
Data data_maior(Data vdt[], int tamanho){
    /// implementar!
}

/**
    Retorno: Data
    Objetivo: Retornar a menor data (mais antiga) do vetor.
    Parâmetros:
        - Vetor de datas (Data vtd[])
        - Tamanho do vetor (int tamanho)
*/
Data data_menor(Data vdt[], int tamanho){
    /// implementar!
}
