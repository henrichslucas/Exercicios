#include <stdio.h>
#include <stdlib.h>

int vitoria(int e1, int e2){
    int soma = (e1 + e2);
    int victory = soma % 2 == 0;

    return victory;
}

int checkroubo(int rou1, int rou2){
    int roubo;

    if (rou1 == 1 && rou2 == 0){ //roubo rolou e nao foi pego
        roubo = 0;
    }else{
        if( (rou1 == 1 && rou2 == 1) ){ //roubo rolou e foi pego
            roubo = 1;
        }else{
            if( (rou1 == 0 && rou2 == 1) ){ //roubo nao rolou e foi acusado
                roubo = 2;
            }else{
                if ( rou1 == 0 && rou2 == 0 ){ //roubo nao rolou e nao foi acusado
                    roubo = 3; 
                }
            }
        }
    }
    return roubo;
}

int main(){
    int p, j1, j2, r, a;
    int resultadoSOMA;
    char winner;

    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    resultadoSOMA = vitoria(j1, j2);

    if( (resultadoSOMA == 0 && p == 0 ) || (resultadoSOMA == 1 && p == 1) ){
        winner = 11;
    }else{
        winner = 0;
    }
    
    //printf("%d %d \n", resultadoSOMA, p);

    int resultadoROUBO;

    resultadoROUBO = checkroubo(r, a);

    if (resultadoROUBO == 1){
        printf("Jogador 2 ganha!\n");
    }else{
        if(resultadoROUBO == 0){
            printf("Jogador 1 ganha!\n");
        }else{
            if(resultadoROUBO == 2){
                printf("Jogador 1 ganha!\n");
            }else{
                if(resultadoROUBO == 3 && winner == 0){
                    printf("Jogador 2 ganha!\n");
                }else{
                    printf("Jogador 1 ganha!\n");
                }
            }
        }
    }
    return 0;
}

