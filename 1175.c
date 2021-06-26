#include <stdio.h>
 
int main(){
    int i ,qtdpos=20, aux;
    int n[20], j = qtdpos;

    for ( i = 0 ; i < qtdpos ; i++){
        scanf("%d", &n[i]);
    }

    for ( i = 0 ; i < qtdpos ; i++){
            j = j-1;
            aux = n[i];
            n[i] = n[j];
            n[j] = aux;
            if(j == 10){
                break;
            }
    }
    //printf("\n");

    for ( i = 0 ; i < qtdpos ; i++){
        printf("N[%d] = %d\n", i, n[i] );
    }




    return 0;
}
