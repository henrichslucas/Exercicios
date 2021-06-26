#include <stdio.h>
int main(){ 
    //leitura dos dados
	int i, n, score, crescente, constante, decrescente, pos = 0;
    
    scanf("%d", &n);

    int r[101];

    for( i = 0; i < n; i++){
        scanf("%d", &r[i]);
    }
    
    crescente = r[0] < r[1];
    //printf("1 - %d\n\n", crescente);
    constante = r[0] == r[1];
    //printf("1 - %d\n\n", decrescente);
    
    if (crescente == 1 || constante == 1){
        score = 1;
        i = 1;
    }else{
        score = 0;
        pos = 2;
    }
    
    
    //processamento dos dados
    while(score == 1 && i < n-1){
        if ( (crescente == 1 && r[i] > r[i+1]) ){
            score = 0;
            pos = i+2;
            
        }else{
            if ( constante == 1 && (r[i] > r[i+1]) ){
                score = 0;
                pos = i+2;
            }else{
                constante = r[i] == r[i+1];
                crescente = r[i] < r[i+1];
                r[i] = r[i+1];
                i++;
            }
        }
    }
    //impressão dos dados  
    printf("%d\n", pos);

    return 0;
}