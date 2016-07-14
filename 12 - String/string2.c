#include <stdio.h>

int main(){
    char nome[51];

    printf("Informe o nome: ");
    scanf("%[^\n]s", nome);

    printf("(%s)", nome);

    return 0;
}
