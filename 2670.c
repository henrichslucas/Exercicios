#include <stdio.h>

int menor(int m, int j, int n){
    int menorvalor;
    int menor;

    menorvalor = (m < n) && (m < j);
    if(menorvalor == 1){
        menor = m;
    }else{
        menorvalor = (n < m) && (n < j);
        if(menorvalor == 1){
            menor = n;
        }else{
            menor = j;
        }
    }  
    return menor;
}


int checkmin(int a,int b, int c){ 
    int tempo1, tempo2, tempo3, ok;

    tempo1 = 0 + b * 2 + c * 4;
    tempo2 = a * 2 + 0 + c * 2;
    tempo3 = a * 4 + b * 2 + 0;

    ok = menor(tempo1 , tempo2 , tempo3);
    
    return ok;
}

int main(){
    int andarUM, andarDOIS, andarTRES, total;

    scanf("%d %d %d", &andarUM, &andarDOIS, &andarTRES);

    total = checkmin(andarUM, andarDOIS, andarTRES);

    printf("%d\n", total);
    return 0;
}