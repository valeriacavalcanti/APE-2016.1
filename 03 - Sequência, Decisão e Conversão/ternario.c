#include <stdio.h>

int main(){
    int x, y;

    scanf("%d %d", &x, &y);

    printf("Maior = %d\n", (x > y)?(x):(y));

    (x > y)?(printf("%d", x)):(printf("%d", y));

    return 0;
}
