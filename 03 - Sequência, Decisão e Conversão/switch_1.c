#include <stdio.h>

int main(){
    int num;

    printf("Informe um valor (entre 1 e 10): ");
    scanf("%d", &num);

    switch(num){
        case 1:
            printf("um\n");
            printf("um mesmo!");
            break;
        case 2: printf("dois"); break;
        case 3: printf("tres"); break;
        case 4: printf("quatro"); break;
        case 5: printf("cinco"); break;
        case 6: printf("seis"); break;
        case 7: printf("sete"); break;
        case 8: printf("oito"); break;
        case 9: printf("nove"); break;
        case 10: printf("dez"); break;
        default: printf("erro");
    }

    return 0;
}
