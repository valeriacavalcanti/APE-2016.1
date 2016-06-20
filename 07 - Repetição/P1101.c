#include <stdio.h>

int main(){
    int m, n, i, soma=0, aux;

    scanf("%d %d", &m, &n);
    while (m>0 && n>0){
        soma=0;
        if (m>n){
            aux=m;
            m=n;
            n=aux;
        }
        for (i=m;i<=n;i++){
            printf("%d ", i);
            soma+=i;
        }
        printf("Sum=%d\n",soma);
        scanf("%d %d", &m, &n);
    }
    return 0;
}
