#include <stdio.h>

int main(){
    char frase[] = "   que   bom    que    bom    que    bom     ";
    int i;

    while (strchr(frase, ' ') != NULL){
        i = strchr(frase, ' ') - frase;
        for (; frase[i] != '\0'; ++i){
            frase[i] = frase[i + 1];
        }
    }

    printf("(%s)", frase);

    return 0;
}
