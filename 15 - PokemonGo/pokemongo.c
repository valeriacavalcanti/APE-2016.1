#include <stdio.h>
#include <string.h>

#define TAM 6

typedef struct{
    char nome[51];
    int nivel;
}Pokemon;

typedef struct{
    Pokemon pok;
    int ocupada;
}Celula;

int main(){
    Celula matriz[TAM][TAM];
    int i, j, qtde, l, c;
    Pokemon p;

    /// inicilizar matriz, celulas todas desocupadas
    for (i = 0; i < TAM; ++i){
        for (j = 0; j < TAM; ++j){
            matriz[i][j].ocupada = 0;
        }
    }

    /// exibir a matriz
    printf("  ");
    for (i = 0; i < TAM; ++i){
        printf("%d ", i);
    }
    printf("\n");
    for (i = 0; i < TAM; ++i){
        printf("%d ", i);
        for (j = 0; j < TAM; ++j){
            if (matriz[i][j].ocupada == 0){
                printf("L ");
            }else{
                printf("O ");
            }
        }
        printf("\n");
    }

    /// ler a quantidade de pokemons
    printf("Informe a quantidade de pokemons: ");
    scanf("%d%*c", &qtde);

    for (i = 0; i < qtde; ++i){
        /// obter os dados do "i" pokemon
        printf("Informe o nome: ");
        gets(p.nome);
        printf("Informe o nivel: ");
        scanf("%d%*c", &p.nivel);

        /// obter a localizacao do pokemon na matriz
        do{
            printf("Informe a localizacao: ");
            scanf("%d %d%*c", &l, &c);
        }while(matriz[l][c].ocupada == 1);

        /// inserir o pokemon na matriz
        matriz[l][c].pok = p;
        matriz[l][c].ocupada = 1;
    } /// for i

    system("cls");

    /// exibir a matriz
    printf("  ");
    for (i = 0; i < TAM; ++i){
        printf("%d ", i);
    }
    printf("\n");
    for (i = 0; i < TAM; ++i){
        printf("%d ", i);
        for (j = 0; j < TAM; ++j){
            if (matriz[i][j].ocupada == 0){
                printf("L ");
            }else{
                printf("O ");
            }
        }
        printf("\n");
    }

    /// exibir os pokemons que estao na matriz
    for (i = 0; i < TAM; ++i){
        for (j = 0; j < TAM; ++j){
            if (matriz[i][j].ocupada == 1){
                printf("%d %d - %s - %d\n", i, j, matriz[i][j].pok.nome,
                                                  matriz[i][j].pok.nivel);
            }
        }
    }

    return 0;
}
