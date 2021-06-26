#include <stdio.h>
int main() {
    int i;
    double s ,n1= -1, n2 = -1, valido1 = 0, valido2 = 0;
        while(valido1 <1){
            scanf("%lf", &n1);
            if(n1>0 && n1 <=10){
                valido1 = 1;
            }else{
                printf("nota invalida\n");
            }
        }
        while(valido2 <1){
            scanf("%lf", &n2);
            if(n2>0 && n2 <=10){
                valido2 = 1;
            }else{
                printf("nota invalida\n");
            }
        }
        if(valido1 ==1 && valido2 == 1){
            s = (n1 + n2) / 2;
            printf("media = %.2lf\n", s);
        }
    
    return 0;
}