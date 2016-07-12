#include <stdio.h>
#define TAM 6

int main(){
    int n[TAM] = {};
    int i, j, qtd = 0,valor,troca,aux;

    ///monta a sequencia de numeros
    do{
        scanf("%d",&valor);
        for(j = 0;j < qtd && valor != n[j]; j++);

        if (j == qtd){
            n[qtd++] = valor;
        }
    }while(qtd < TAM);

    printf("sequencia de numeros: ");
    for(i = 0; i < TAM; i++) printf("%d ",n[i]);

    do{
        troca=0;
        for(i = 0; i < TAM - 1 ; i++){

            if(n[i]>n[i+1]){

                aux=n[i];
                n[i]=n[i+1];
                n[i+1]=aux;
                troca = 1;
            }

        }
    }while(troca == 1);


    printf("\nsequencia de numeros: ");
    for(i = 0; i < TAM; i++) printf("%d ",n[i]);

    return 0;

}
