#include <stdio.h>

int main(){
    int x = 10, y = 20, aux;

    aux = x;
    x = y;
    y = aux;

    printf ("%d %d", x, y);

    return 0;
}
