/*
	Escreva um programa, em C, para obter o código e o valor de 10 (dez) produtos. O programa deverá calcular e exibir:
	- Média do valor dos produtos;
	- Quantidade de produtos com valor abaixo da média dos produtos lidos;
	- Código dos produtos com valor acima da média dos produtos lidos.
*/

#include <stdio.h>
#define TAM 4

int main(){
    int i, codigos[TAM], qtde = 0;
    float valores[TAM], soma = 0, media;

    for (i = 0; i < TAM; ++i){
        printf("Informe o codigo e o valor do produto %d: ", i + 1);
        scanf("%d %f", &codigos[i], &valores[i]);
        soma += valores[i];
    }

    media = soma / TAM;
    printf("Media: %.2f\n", media);

    for (i = 0; i < TAM; i++){
        if (valores[i] < media){
            ++qtde;
        }
    }

    printf("Quantidade abaixo da media: %d\n", qtde);

    printf("Codigo dos produtos com valor acima da media: ");
    for (i = 0; i < TAM; ++i){
        if (valores[i] > media){
            printf("%d (%.2f) ", codigos[i], valores[i]);
        }
    }

    return 0;
}
