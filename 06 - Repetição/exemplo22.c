#include <stdio.h>

int main(){
    int num;

    do{
       printf("Informe um valor: ");
       scanf("%d", &num);
    }while(num == 15);

    return 0;
}
