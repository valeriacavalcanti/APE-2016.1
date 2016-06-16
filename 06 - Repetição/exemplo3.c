#include <stdio.h>

int main(){
    int i, j, num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        //printf("%d\n", i);
        for (j = 1; j <= i; ++j){
            printf("* ");
        } // for j
        printf("\n");
    } // for i

    for (i = num - 1; i >= 1; --i){
        for (j = 1; j <= i; ++j){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
