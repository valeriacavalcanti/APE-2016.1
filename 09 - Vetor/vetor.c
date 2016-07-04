#include <stdio.h>
#define TAM 4

int main(){
    int i, numeros[TAM], soma = 0;
    float media;

    /// armazenar os números no vetor
    for (i = 0; i < TAM; ++i){
        printf("Informe o %d valor: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    /// exibir os números que estão armazenados no vetor
    printf("Numeros digitados: ");
    for (i = 0; i < TAM; i++){
        printf("%d ", numeros[i]);
    }

    /// exibir os números na ordem inversa
    printf("\nNumeros na ordem inversa: ");
    for (i = TAM-1; i >= 0; i--){
        printf("%d ", numeros[i]);
    }

    printf("\nSoma = %d\n", soma);

    media = (float)soma/TAM;

    printf("Media = %.2f\n", media);

    return 0;
}
