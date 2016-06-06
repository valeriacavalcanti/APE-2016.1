#include <stdio.h>

int main(){
    double valor = 576.73;
    int notas = (int) valor;
    int moedas = (int)((valor - notas)*100);

    printf ("%lf %d %d", valor, notas, moedas);


    return 0;
}
