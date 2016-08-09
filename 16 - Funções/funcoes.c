#include <stdio.h>

typedef struct {
    int dia, mes, ano;
} Data;

void print_data(Data d);
int data_iguais(Data d1, Data d2);
int data_cmp(Data d1, Data d2);

int main(){
    Data dt1 = {1,1,1}, dt2 = {2,2,2};
    ///int resultado;

    print_data(dt1);

    ///resultado = data_iguais(dt1, dt2);
    ///printf("%d\n", resultado);

    printf("%d\n", data_iguais(dt1, dt2));

    if (data_iguais(dt1, dt2) == 1){
        printf("Iguais\n");
    }else{
        printf("Diferentes\n");
    }

    printf("%d\n", data_cmp(dt1, dt2));

    return 0;
}

void print_data(Data d){
    printf("%d/%d/%d\n", d.dia, d.mes, d.ano);
}

int data_iguais(Data d1, Data d2){
    if (d1.dia == d2.dia && d1.mes == d2.mes && d1.ano == d2.ano)
        return 1;
    else return 0;
}

int data_cmp(Data d1, Data d2){
    if (d1.ano < d2.ano) return -1;
    else if (d1.ano > d2.ano) return 1;
    else return 0;
}
