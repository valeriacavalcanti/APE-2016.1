#include <stdio.h>

int main(){
    int numeros[] = {18,13,15,7,24,12};
    int i, valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    for (i = 0; i < 6 && numeros[i] != valor; i++);

    if (i == 6){
        printf("Nao tem\n");
    }else{
        printf("Tem, e ele eh o %d numero.", i + 1);
    }

    return 0;
}
