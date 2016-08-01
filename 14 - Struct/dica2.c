#include <stdio.h>

int main(){
    int v1[] = {2, 4, 6, 8, 10, 12};
    int v2[] = {12, 10, 8, 6, 4, 2};
    int i, aux, troca;

    /// bolha
    do{
        troca = 0;
        for (i = 0; i < 5; ++i){
            if (v2[i] > v2[i + 1]){
                aux = v2[i];
                v2[i] = v2[i + 1];
                v2[i + 1] = aux;
                troca = 1;
            }
        }
    }while (troca == 1);

    for (i = 0; i < 6 && v1[i] == v2[i]; ++i);

    if (i == 6){
        puts("Sao iguais");
    }else{
        puts("nao sao iguais");
    }

    return 0;
}
