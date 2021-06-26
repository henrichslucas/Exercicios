#include <stdio.h>
 
int main() {
    int a, b,c, maior;
    
    
    scanf("%d %d %d",&a, &b, &c);
    
    
    maior = (a+b+abs(a-b))/2;
    if (maior == a){
        maior = (a+c+abs(a-c))/2;
    }else
        if (maior ==b){
            maior = (b+c+abs(b-c))/2;
        }
    printf("%d eh o maior\n", maior);
        
    
    
    
    return 0;
}