#include <stdio.h>

int main(){
    int i, n;
    float divisao = 2;
    scanf("%d", &n);
    if( n == 0 ){
        divisao = 1;
        }else{
            for(i = 0; i<n-1;i++ ){
                divisao = 2 + (1/divisao);
            }
            divisao = 1 + (1/divisao);
        }
        printf("%.10f\n", divisao);
        return 0;
    }