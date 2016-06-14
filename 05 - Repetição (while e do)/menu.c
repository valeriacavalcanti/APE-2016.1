#include <stdio.h>

int main(){
    int n1, n2, opcao;

    printf("Informe os dois numeros: ");
    scanf("%d %d", &n1, &n2);

    do{
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");

        printf("Informe sua opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: printf("Soma = %d\n", n1 + n2); break;
            case 2: printf("Subtracao = %d\n", n1 - n2); break;
            case 3: printf("Multiplicacao = %d\n", n1 * n2); break;
            case 4:
                if (n2 != 0)
                    printf("Divisao = %d\n", n1 / n2);
                else
                    printf("se oriente!\n");
                break;
            case 5: printf("volte sempre!!"); break;
            default: printf("opcao invalida\n");
        }
    }while(opcao != 5);

    return 0;
}
