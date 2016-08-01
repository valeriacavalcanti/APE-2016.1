#include <stdio.h>

int main(){
    int v1[] = {2, 4, 6, 8, 10, 12};
    int v2[] = {12, 10, 8, 6, 4, 2};
    int i,j, qtde = 0;

    /// forma 1
    for (i = 0; i < 6; ++i){
        for (j = 0; j < 6; ++j){
            if (v1[i] == v2[j]) ++qtde;
        }
    }

    /// forma 2
    for (i = 0; i < 6; ++i){
        for (j = 0; j < 6 && v1[i] != v2[j]; ++j);
        if (j < 6) ++qtde;
    }

    /// forma 3
    for (i = 0; i < 6 && i == qtde; ++i){
        for (j = 0; j < 6 && v1[i] != v2[j]; ++j);
        if (j < 6) ++qtde;
    }

    printf("%d\n", qtde);

    return 0;
}
