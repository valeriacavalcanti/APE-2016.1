#include <stdio.h>
#include <math.h>

int main(){
    int n, i;
    double q;

    scanf("%d", &n);

    for (i = 2; i <= n; i+=2){
        printf("%d^2 = %.0lf\n", i, pow(i, 2));
    }

    return 0;
}
