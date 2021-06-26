#include <stdio.h>
#include <string.h>
 
int main() {
     char NOME[20]; 
     double FIXO, VENDATOTAL, SALARIOFINAL;
     
     gets(NOME);
     scanf("%lf", &FIXO);
     scanf("%lf", &VENDATOTAL);
     
     SALARIOFINAL = (VENDATOTAL*0.15) + FIXO;
     
     printf("TOTAL = R$ %.2lf\n", SALARIOFINAL);
     
     return 0;
}