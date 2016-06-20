#include <stdio.h>

int main(){
    int n, i, u, p=1, a=0;

    scanf("%d", &n);
    printf("0 1");
    for (i=3;i<=n;i++){
        u=p+a;
        printf(" %d",u);
        a=p;
        p=u;
    }
    printf("\n");
    return 0;
}
