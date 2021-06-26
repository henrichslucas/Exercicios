#include <stdio.h>
 
int main() {
    int vezes, i, n,primo ,contagem = 0;
    scanf("%d", &vezes);
    while(contagem != vezes){
        primo = 0;
        scanf("%d", &n);
        for(i=1; i<n+1;i++){
            if(n%i == 0){
                primo = primo + 1;
            }
        }
        if(primo == 2){
            printf("%d eh primo\n",n);
        }else{
            printf("%d nao eh primo\n",n);
        }
        contagem++;
    }
    return 0;
}