#include <stdio.h>
#include <string.h>
int main(){
    int asc[100], desloc, vezes;
    int i, j, tamanho;
    char c[200];

    scanf("%d", &vezes);

    for(i = 0; i < vezes ; i++){
        scanf("%s",c);
        tamanho = strlen(c);

        for (j = 0; j < tamanho; j++){
            asc[j] = (int)(c[j]);
        }

        scanf("%d", &desloc);

        for (j = 0; j < tamanho; j++){
            asc[j] = asc[j] - desloc;
            if (asc[j] < 65){
                asc[j] = 65 - asc[j];
                asc[j] = 91 - asc[j];
            }
        }

        for (j = 0; j < tamanho; j++){
            printf("%c", asc[j]);
        }
        printf("\n");

    }
        return 0;
}   
