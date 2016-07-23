#include <stdio.h>

int main(){
    char tabuleiro[3][3];
    int i, j;


    for (i = 0; i < 3; ++i){
        for (j = 0; j < 3; ++j){
            tabuleiro[i][j] = '#';
        }
    }

    printf("  ");
    for (i = 0; i < 3; ++i){
        printf("%d ", i);
    }

    printf("\n");

    for (i = 0; i < 3; ++i){
        printf("%d ", i);
        for (j = 0; j < 3; ++j){
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
