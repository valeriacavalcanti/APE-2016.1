#include <stdio.h>

int main(){
    int num, i, soma = 0;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num % 2 == 1){
        ++num;
    }

    for (i = 1; i <= 10; ++i){
        soma = soma + num;
        printf("%d - %d\n", i, num);
        num += 2;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
