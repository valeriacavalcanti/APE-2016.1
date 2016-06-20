#include <stdio.h>

int main(){
    int i, n, num, soma=0;

    scanf("%d",&n);
    while (n!=0){
        soma=0;
        if (n%2!=0) {
            n++;
        }
        for (i=1;i<=5;i++){
            soma+=n;
            n+=2;
        }
        printf("%d\n", soma);
        scanf("%d",&n);
    }
    return 0;
}
