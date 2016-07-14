#include <stdio.h>

int main(){
    char nome[20];
    int i, j, k, qtde;

    for (k = 0; k < 3; ++k){
        printf("Informe a quantidade: ");
        scanf("%d%*c", &qtde);

        printf("Informe o nome: ");
        scanf("%[^\n]s", nome);

        printf("(%s)\n", nome);

        for (i = 0; nome[i] != '\0'; ++i){
            printf("%c", nome[i]);
            for (j = 1; j <= qtde; ++j){
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}
