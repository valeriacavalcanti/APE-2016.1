#include <stdio.h>
#define TAM 2

typedef struct {
    int dia, mes, ano;
} Data;

void print_data(Data d);
void bomdia();
void boatarde();
void boanoite();

int main(){
    Data d1, d2, datas[TAM];
    int i;

    d1 = (Data){1, 1, 2000};
    d2 = (Data){2, 2, 2000};

    print_data(d1);
    print_data(d2);

    for (i = 0; i < TAM; ++i){
        scanf("%d/%d/%d", &datas[i].dia, &datas[i].mes, &datas[i].ano);
    }

    for (i = 0; i < TAM; ++i){
        print_data(datas[i]);
    }

    bomdia();
    boatarde();
    boanoite();

    return 0;
}

void print_data(Data d){
    printf("%d-%d-%d\n", d.dia, d.mes, d.ano);
}

void boatarde(){
    puts("Boa tarde!");
}

void bomdia(){
    puts("Bom dia!");
}

void boanoite(){
    puts("Boa noite!");
}
