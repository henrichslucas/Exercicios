#include <stdio.h>

int main() {
    
    double km, gas, total;
    
    scanf("%lf", &km);
    scanf("%lf", &gas);
    	
    
    total = km / gas;
    
    printf("%.3lf km/l\n", total );
            
     
     
     
     return 0;
}