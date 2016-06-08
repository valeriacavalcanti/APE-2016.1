#include <stdio.h>

int main(){
    int x = 10, y = 20;

    printf("%d %d\n", x, y); /// 10 20

    y = ++x;
    printf("%d %d\n", x, y); /// 11 11

    x = 10, y = 20;
    y = x++;
    printf("%d %d\n", x, y); /// 11 10

    return 0;
}
