#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
    float a, b, c, x1, x2, delta;
    scanf("%f %f %f", &a, &b, &c);
    delta = b*b - 4*a*c;
   

    if(a == 0){
        printf("Impossivel calcular\n");
        exit(0);
    }
    if(delta < 0){
        printf("Impossivel calcular\n");
        exit(0);
    }
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    if(delta == 0){    
        printf("R1 = %.5f\n", x1);
        printf("R2 = %.5f\n", x1);
    }
    if(delta > 0){
        printf("R1 = %.5f\n", x1);
        printf("R2 = %.5f\n", x2);
    }
    

    
  
    
    
    
    return 0;
}