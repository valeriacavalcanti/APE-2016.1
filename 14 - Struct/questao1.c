#include <stdio.h>

int main(){
    int i, aposta[6], num, qtde = 0;

    do{
        printf("Informe o %d numero: ", qtde + 1);
        scanf("%d", &num);
        if (num % 2 == 0){
            for (i = 0; i < qtde && num != aposta[i]; ++i);
            if (i == qtde){
                aposta[qtde++] = num;
            }
        }
    }while (qtde < 6);

    for (i = 0; i < 6; ++i){
        printf("%d ", aposta[i]);
    }

    return 0;
}
