#include <stdio.h>

int main(){
    int num, qtde = 0;

    do{
        printf("Informe um numero positivo (>0): ");
        scanf("%d", &num);
    }while(num <= 0);

    printf("Numero = %d\n", num);

    return 0;
}
