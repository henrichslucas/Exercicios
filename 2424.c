#include <stdio.h>

int checkdentro(int a,int b){ 
    int compA, compB, ok;
    
    compA = (a >= 0) && (a <= 432);
    compB = (b >= 0) && (b <= 468);

    ok = (compA == 1) && (compB == 1);

    return ok;
}

int main(){
    int x,y, pass;

    scanf("%d %d", &x, &y);

    pass = checkdentro(x,y);

    printf(pass?"dentro\n":"fora\n");
    return 0;
}