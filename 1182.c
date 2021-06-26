#include<stdio.h>
#include<stdlib.h>


int main(){ 
	int i, j, col;
    char operacao;

	double mat[12][12], soma = 0, media = 0; 
    scanf("%d", &col);
    scanf("%c", &operacao);
    operacao = getchar();

	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			scanf("%lf", &mat[i][j]); 
		}
	}
    
    if(operacao == 'S'){ // soma
	    for(i=0; i<12; i++){
            soma = mat[i][col] + soma  ;
		}
        printf("%.1lf\n", soma);
    }

    if(operacao == 'M'){
        for(i=0; i<12; i++){
            media = mat[i][col] + media;
        }
        media = media / 12;
        printf("%.1lf\n", media);
    }
    return 0;
}