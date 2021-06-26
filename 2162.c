#include <stdio.h>
int main(){ 
    //leitura dos dados
	int i, n, score, crescente, decrescente,h[101];
    
    scanf("%d", &n);

    for( i = 0; i < n; i++){
        scanf("%d", &h[i]);
    }
    
    crescente = h[0] < h[1];
    //printf("1 - %d\n\n", crescente);
    decrescente = h[0] > h[1];
    //printf("1 - %d\n\n", decrescente);
    if (crescente == 1 || decrescente == 1){
        score = 1;
        i = 1;
    }else{
        score = 0;
    
    }
    
    
    
    //processamento dos dados
    while(score == 1 && i < n-1){
        if ( (crescente == 1 && h[i] < h[i+1]) || (decrescente == 1 && h[i] > h[i+1]) ){
            score = 0;
        }else{
            if (h[i] == h[i+1]){
                score = 0;
            }else{
                decrescente = h[i] > h[i+1];
                //printf("2 - %d\n\n", crescente);
                crescente = h[i] < h[i+1];
                //printf("2 - %d\n\n", decrescente);
                h[i] = h[i+1];
                i++;
            }
        }
    }
  



    //impressão de dados
    //printf(score?"1":"0");
    if(score == 1){
        printf("1\n");
    }else{
        printf("0\n");
    }

    return 0;
}