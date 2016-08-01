#include <stdio.h>
#include <string.h>

typedef struct{
    int dia, mes, ano;
} Data;

typedef struct{
    char nome[31];
    Data nascimento;
} Pessoa;

int main(){
    int n = 10;
    Data hoje = {1,8,2016};
    Pessoa pessoas[10];
    Pessoa matriz[4][4];

    //Pessoa p = {"valeria", 1,8,2000};

    Pessoa p, pcopia;

    //hoje.dia = 1;
    //hoje.mes = 8;
    //hoje.ano = 2016;

    strcpy(p.nome, "valeria");
    //p.nascimento.dia = 1;
    //p.nascimento.mes = 8;
    //p.nascimento.ano = 2000;

    p.nascimento = hoje;

    printf("%d %d %d\n", hoje.dia, hoje.mes, hoje.ano);

    printf("%s %d/%d/%d\n", p.nome, p.nascimento.dia,
                                    p.nascimento.mes,
                                    p.nascimento.ano);

    printf("Informe o nome: ");
    gets(p.nome);

    printf("Nascimento (d/m/y): ");
    scanf("%d/%d/%d", &p.nascimento.dia, &p.nascimento.mes,
                      &p.nascimento.ano);

    printf("%s %d/%d/%d\n", p.nome, p.nascimento.dia,
                                    p.nascimento.mes,
                                    p.nascimento.ano);


    pcopia = p;

    printf("%s %d/%d/%d\n", pcopia.nome, pcopia.nascimento.dia,
                                         pcopia.nascimento.mes,
                                         pcopia.nascimento.ano);

    pessoas[0] = pcopia;

    printf("Informe o nome: ");
    gets(pessoas[1].nome);

    printf("Nascimento (d/m/y): ");
    scanf("%d/%d/%d", &pessoas[1].nascimento.dia,
                      &pessoas[1].nascimento.mes,
                      &pessoas[1].nascimento.ano);

    return 0;
}
