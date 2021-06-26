#include <stdio.h>
 
int main() {
 
    int i,n, tab;
    scanf("%d", &n);
    for(i=1;i<11;i++){
        tab = i * n;
        printf("%d x %d = %d\n", i, n, tab);
    }
 
    return 0;
}