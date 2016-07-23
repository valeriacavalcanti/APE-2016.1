#include <stdio.h>

int main(){
    char frase[] = "      que      bom      que       bom       que       bom         ";
    int i;

    while (strstr(frase, "  ") != NULL){
        i = strstr(frase, "  ") - frase;
        for (; frase[i] != '\0'; ++i){
            frase[i] = frase[i + 1];
        }
    }

    /// contribuição de Veihmeyer

    if (frase[strlen(frase) - 1] == ' '){
        frase[strlen(frase) - 1] = '\0';
    }

    /// contribuição de Diego

    if (frase[0] == ' '){
        for (i = 0; frase[i] != '\0'; ++i){
            frase[i] = frase[i + 1];
        }
    }

    printf("(%s)", frase);

    return 0;
}
