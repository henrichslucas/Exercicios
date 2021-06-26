#include <stdio.h>
#include <stdlib.h>

int main(){
    int j, f = 3, i, vet[3],vet2[3],aux;

    scanf("%d %d %d", &vet[0], &vet[1], &vet[2]);
    for(i = 0; i<3; i++){
        vet2[i] = vet[i];
    }


    for(j = f - 1; j > -1; j--){
		for(i = 0; i<j; i++){
			if(vet[i]>vet[i+1]){
				aux=vet[i+1];
                vet[i+1]=vet[i];
                vet[i]=aux;
            }
        }
   }
   for(i = 0; i<3; i++){
       printf("%d\n", vet[i]);
   }
   
   printf("\n"); 

   for(i = 0; i<3; i++){
       printf("%d\n", vet2[i]);
   }

    return 0;
}

