#include <stdio.h>
 
int main() {
    int n, i,fat;
    scanf("%d", &n);
    fat = n * (n-1);
    for(i = n-2 ; i>0; i--){
        fat = fat * i;
    }
    printf("%d\n", fat);
    return 0;
}