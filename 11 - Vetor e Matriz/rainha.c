#include <stdio.h>
#define TAM 9
int main(){
    int i, cod[8]={10,15,20,25,30,35,40,45},votos[TAM]={}, voto;

    printf("Digite seu voto:");
    scanf("%d",&voto);

    while(voto>0){
        switch (voto){
            case 10: votos[0]++;break;
            case 15: votos[1]++;break;
            case 20: votos[2]++;break;
            case 25: votos[3]++;break;
            case 30: votos[4]++;break;
            case 35: votos[5]++;break;
            case 40: votos[6]++;break;
            case 45: votos[7]++;break;
            default: votos[8]++;break;
        }

        printf("Digite seu voto:");
        scanf("%d",&voto);
    }

    printf("\n");
    for(i=0;i<TAM-1;i++){
        printf("A candidata %d recebeu: %d votos!\n",cod[i], votos[i] );

    }
    printf("Os votos invalidos foram: %d\n",votos[8]);

    return 0;
}
