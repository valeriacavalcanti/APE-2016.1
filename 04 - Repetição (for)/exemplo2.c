#include <stdio.h>

int main(){
    int media_individual, soma = 0, i;
    float media_turma;

    for (i = 1; i <= 4; ++i){
        printf("Informe a media do %d aluno: ", i);
        scanf("%d", &media_individual);
        soma += media_individual;

        if (media_individual >= 70){
            printf("Aprovado!\n");
        }else{
            if (media_individual >= 40){
                printf("Final\n");
            }else{
                printf("Reprovado\n");
            }
        }
    } // for

    media_turma = (float)soma / 4;

    printf("Media da turma: %.2f\n", media_turma);

    return 0;
}
