#include <stdio.h>
 
int main(){
    int i, rodada = 0;
    int par[5], impar[5], n, posy =0, posx =0;

    while(rodada != 15){
        rodada++;
        scanf("%d", &n);

        if( n%2==0){  //par
            par[posx] = n;
            posx++;
            if( posx == 5){
                for ( i = 0 ; i < 5 ; i++){
                    printf("par[%d] = %d\n", i, par[i]);
                    posx=0;
                    par[i] = '/0';
                }
            }
            
            }else{
                impar[posy] = n;
                posy++;
                if(posy == 5){
                    for ( i = 0 ; i < 5 ; i++){
                        printf("impar[%d] = %d\n", i, impar[i]);
                        posy = 0;
                        impar[i] = '/0';
                    }
                }
            }
    }
     //checkup
            for ( i = 0 ; i < 5 ; i++){
                if(impar[i] != '/0'){
                    printf("impar[%d] = %d\n", i, impar[i]);
                }
            }
            for ( i = 0 ; i < 5 ; i++){
                if(par[i] != '/0'){
                    printf("par[%d] = %d\n", i, par[i]);
                }
            }
    return 0;
}