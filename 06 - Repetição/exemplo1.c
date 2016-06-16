#include <stdio.h>

int main(){
    int num;

    do{
        printf("Informe um numero: ");
        scanf("%d", &num);
    }while(num != 15);

    printf("Numero = %d\n", num);

    return 0;
}
