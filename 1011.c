#include <stdio.h>
#include <math.h>
int main() {
 
   double raio, pi=3.14159, VOL;
   
   scanf("%lf",&raio);
   
   VOL = (4.0/3) * pi * pow(raio, 3);
   
   
   printf("VOLUME = %.3lf\n", VOL);
 
    return 0;
}