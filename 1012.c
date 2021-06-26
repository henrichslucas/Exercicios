#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, c, areaT, areaC, areaTRA, areaQ, areaR, pi =3.14159;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    areaT = a * c / 2;
    areaC = pi * pow(c, 2);
    areaTRA = (a + b) * c / 2;
    areaQ = pow(b, 2);
    areaR = a * b;
    
    printf("TRIANGULO: %.3lf\n", areaT);
    printf("CIRCULO: %.3lf\n", areaC);
    printf("TRAPEZIO: %.3lf\n", areaTRA);
    printf("QUADRADO: %.3lf\n", areaQ);
    printf("RETANGULO: %.3lf\n", areaR);
    
    return 0;
}