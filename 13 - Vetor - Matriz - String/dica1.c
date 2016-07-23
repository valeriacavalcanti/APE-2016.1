#include <stdio.h>
#include <string.h>

int main(){
    char frase[] = "que bom", vogais[] = "aeiouAEIOU";
    int i, qtde = 0;

    for (i = 0; frase[i] != '\0'; ++i){
        if (strchr(vogais, frase[i]) != NULL) ++qtde;
    }

    printf("Quantidade: %d\n", qtde);

    return 0;
}

