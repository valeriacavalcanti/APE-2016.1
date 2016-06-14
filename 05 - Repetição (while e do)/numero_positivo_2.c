#include <stdio.h>

int main(){
    int num, qtde = 0;

    printf("Informe um numero positivo (>0): ");
    scanf("%d", &num);

    while(num <= 0){
        ++qtde;
        printf("Informe um numero positivo (>0): ");
        scanf("%d", &num);
    }

    if (num > 0)
        printf("Numero = %d\n", num);
    else
        printf("Errou %d vezes", qtde);

    return 0;
}
