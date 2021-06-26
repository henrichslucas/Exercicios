#include <stdio.h>
 
int main(){ 
	int i, j, o, count = 0;
   
	double mat[12][12], soma = 0, media = 0;
    
    o = getchar();

	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			scanf("%lf", &mat[i][j]); 
		}
	}
	
    if(o == 'S'){ // soma
	    for(i=0; i<12; i++){
            for(j=0; j< i ; j++){
                soma = mat[i][j] + soma ;
            }
		}
        printf("%.1lf\n", soma);
    }
        
    if(o == 'M'){ // media
	    for(i=0; i<12; i++){
            for(j=0; j<i; j++){
                media = mat[i][j] + media;
                count++;
            }
		}
    media = media / count ;   
    printf("%.1lf\n", media);
    }
    
return 0;
}