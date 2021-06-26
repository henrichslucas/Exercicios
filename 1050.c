#include <stdio.h>

int main(){
    int ddd, check = 0;

    scanf("%d", &ddd);
    switch(ddd){
        case 61:
        printf("Brasilia\n");
        check=1;
        break;
    
        case 71:
            printf("Salvador\n");
            check=1;
            break;
    
        case 11:
            printf("Sao Paulo\n");
            check=1;
            break;
    
        case 21:
            printf("Rio de Janeiro\n");
            check=1;
            break;
    
        case 32:
            printf("Juiz de Fora\n");
            check=1;
            break;
    
        case 19:
            printf("Campinas\n");
            check=1;
            break;
    
        case 31:
            printf("Belo Horizonte\n");
            check=1;
            break;
    
        case 27:
            printf("Vitoria\n");
            check=1;
            break;
            
    }if(check == 0){
        printf("DDD nao cadastrado\n");
    }
}
