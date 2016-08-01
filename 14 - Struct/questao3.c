#include <stdio.h>
#define JOGOS 4

int main(){
    int ouro[20] = {}, prata[20] = {}, bronze[20] = {};
    int i, o, p, b;

    for (i = 0; i < JOGOS; ++i){
        printf("Jogo %d (ouro, prata e bronze): ", i + 1);
        scanf("%d %d %d", &o, &p, &b);
        ouro[o]++;
        prata[p]++;
        bronze[b]++;
    }

    for (i = 0; i < 20; ++i){
        printf("%d - %d %d %d\n", i, ouro[i], prata[i], bronze[i]);
    }

    return 0;
}
