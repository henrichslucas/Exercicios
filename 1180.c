#include <stdio.h>
 
int main(){
    int n,i, aux, pos = 0, menor, j;
    
    scanf(" %d", &n);

    int x[n], y[n];

    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
        y[i] = x[i];
    }

    for(i = 0; i < n; i++){
        for( j = 0; j< i; j++){
            if(y[i] < y[j]){
                aux = y[i];
                y[i] = y[j];
                y[j] = aux;
            }
        }
    }
    /*for(i = 0; i < n; i++){
        printf("%d ", y[i]);
    }*/
    for(i = 0; i < n; i++){
        if(x[pos] == y[0]){
            menor = x[pos];
        }else{
            pos++;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);


    




    return 0;
}