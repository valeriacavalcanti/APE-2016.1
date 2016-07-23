#include <stdio.h>
#include <string.h>

int main(){
    char frase[] = "eu gosto de estudar c", palavra[] = "fofo";

    printf("%d\n", strstr(frase, palavra));
    printf("%d\n", frase);
    printf("%d\n", strstr(frase, palavra) - frase);

    if (strstr(frase, palavra) == NULL){
        puts("nao achei");
    }else{
        puts("achei");
    }

    return 0;
}
