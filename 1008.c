#include <stdio.h>
 
int main() {
 
   int NUM, HORA;
   double DINHEIRO, SALARIO;
   
   scanf("%d", &NUM);
   scanf("%d", &HORA);
   scanf("%lf", &DINHEIRO);
   
   SALARIO = (DINHEIRO * HORA);
   
   printf("NUMBER = %d\n", NUM);
   printf("SALARY = U$ %.2lf\n", SALARIO);
    
    return 0;
}