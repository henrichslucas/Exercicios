#include <stdio.h>
 
int main() {
    int n[50], i,m;
    n[0]= 0;
    n[1]= 1;
    scanf("%d", &m);
    for(i=2; i<m; i++){
        n[i] = n[i-1] + n[i-2];
    }
    for(i=0; i<m-1; i++){
        printf("%d ",n[i]);
    }
    printf("%d\n", n[m-1]);
    
    
    return 0;
}