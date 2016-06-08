#include <stdio.h>

int main(){
    int media;

    printf("Informe a media: ");
    scanf("%d", &media);
/*
    if (media >= 70){
        printf("Aprovado!\n");
    }else{
        if (media >= 40){
            printf("Final\n");
        }else{
            printf("Reprovado\n");
        }
    }


    if (media >= 70)
        printf("Aprovado!\n");
    else
        if (media >= 40)
            printf("Final\n");
        else
            printf("Reprovado\n");
*/

    if (media >= 70)
        printf("Aprovado!\n");
    else if (media >= 40)
        printf("Final\n");
    else
        printf("Reprovado\n");


    return 0;
}
