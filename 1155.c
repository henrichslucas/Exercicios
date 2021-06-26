#include <stdio.h>
int main() {
    int i;
    float divisao = 1;


    for(i=2;i<101;i++){
        divisao = divisao + (float)1/i;
    }
    printf("%.2f\n", divisao);


    return 0;
}