#include <stdio.h>
 
int main() {
    float hora, vm,d, litro ;
    scanf("%f", &hora);
    scanf("%f", &vm);
    
    d = vm * hora;
    litro = d / 12;

    printf("%.3f\n", litro);
    
 
    return 0;
}