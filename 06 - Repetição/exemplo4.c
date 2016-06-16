#include <stdio.h>

int main(){
    int num, i, j;

    printf("Informe um valor: ");
    scanf("%d", &num);
    while (num > 0){
        for (i = 1; i <= num; ++i){
            printf("# ");
        }
        printf("\n");

        printf("Informe um valor: ");
        scanf("%d", &num);
    }

    return 0;
}
