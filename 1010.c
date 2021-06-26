#include <stdio.h>
 
int main() {
 
    double COD, NUM, PRECO, COD2, NUM2, PRECO2, VALOR;
    
    scanf("%lf %lf %lf", &COD, &NUM, &PRECO);
    scanf("%lf %lf %lf", &COD2,&NUM2,&PRECO2);
    
    VALOR = PRECO * NUM + PRECO2 * NUM2;
    
    printf("VALOR A PAGAR: R$ %.2lf\n", VALOR);
    
    return 0;
}