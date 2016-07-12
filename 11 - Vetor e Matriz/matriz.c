#include <stdio.h>
#define LINHAS 4
#define COLUNAS 6

int main(){
    int i, j, matriz[LINHAS][COLUNAS];

    for (i = 0; i < LINHAS; ++i){
        for (j = 0; j < COLUNAS; ++j){
            matriz[i][j] = j + 1;
        }
    }

    printf("    ");
    for (i = 0; i < COLUNAS; ++i){
        printf("[%d] ", i);
    }

    printf("\n");

    for (i = 0; i < LINHAS; ++i){
        printf("[%d] ", i);
        for (j = 0; j < COLUNAS; ++j){
            printf("%2d  ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
