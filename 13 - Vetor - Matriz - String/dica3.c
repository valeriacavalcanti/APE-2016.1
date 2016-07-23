#include <stdio.h>

int main(){
    int idade;

    printf("Informe a matricula(ddmmaaaacc): ");
    scanf("%*2d%*2d%*4d%2d", &idade);

    printf("Idade: %d\n", idade);

    return 0;
}
