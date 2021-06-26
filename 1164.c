#include <stdio.h>
 
int main() {
    int vezes, i, n, perfeito, contagem = 0;
    scanf("%d", &vezes);
    while(contagem != vezes){
        perfeito = 0;
        scanf("%d", &n);
        for(i=1; i<n;i++){
            if(n%i==0){
                perfeito = perfeito + i;
            }
        }
        if(perfeito == n){
            printf("%d eh perfeito\n",n);
        }else{
            printf("%d nao eh perfeito\n",n);
        }
        contagem++;
    }
    return 0;
}