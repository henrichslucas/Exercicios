#include <stdio.h>
 
int main() {
    int n, i=0, contador=0, pum=0,contador2 = 0;

    scanf("%d", &n);
    for(i=1;i < n*4 ; i++){
        printf("%d ", i);
        contador++;
        if(contador == 3){
            printf("PUM\n");
            i++;
            pum++;
            contador = 0;
        }
    }
    
    return 0;
}