#include <stdio.h>
 
int main(){
    int numatributos = 0,numMarcos = 0, numLeo = 0, marcos = 0, leo = 0, sorteioatributo = 0, escolhaM = 0, escolhaL = 0;
    int i, j;          

    while ( scanf("%d", &numatributos) == 1 ){                   
        scanf(" %d", &numMarcos);
        scanf(" %d", &numLeo);
        
    
        int cartaM[101][101], cartaL[101][101];
        
        for(i = 0; i< numMarcos; i++){
            for(j = 0; j< numatributos; j++){
                scanf(" %d", &cartaM[i][j]);
            }
        }
    
        for(i = 0; i< numLeo; i++){
            for(j = 0; j< numatributos; j++){
                scanf(" %d", &cartaL[i][j]);
                
            }
        }
        
        scanf(" %d", &escolhaM);
        escolhaM = escolhaM -1;

        scanf(" %d", &escolhaL);
        escolhaL = escolhaL -1;
        
        scanf(" %d", &sorteioatributo);
        sorteioatributo = sorteioatributo -1;
        
        marcos = cartaM[escolhaM][sorteioatributo];
        leo = cartaL[escolhaL][sorteioatributo];
        
        if(marcos > leo){
            printf("Marcos\n");
        }else{
            if(marcos < leo){
                printf("Leonardo\n");
            }else{
                printf("Empate\n");
            }
        }
    }
    return 0;
}