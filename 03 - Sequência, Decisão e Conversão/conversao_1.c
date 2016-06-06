#include <stdio.h>

int main(){
    int valor = 576, q;
    double d, d2;

    d = valor / 100.0;

    d2 = (int)d;

    printf("d = %.1lf\n", d);
    printf("d2 = %.1lf\n", d2);

    return 0;
}
