#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while (n!=0){
        ((n%2)==0)?printf("par\n"):printf("impar\n");
        scanf("%d", &n);
    }
    return 0;
}
