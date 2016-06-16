#include <stdio.h>

int main(){
    int valor = 576;

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", valor/100);
    valor %= 100;
    printf("%d nota(s) de R$ 50,00\n", valor/50);

    return 0;
}
