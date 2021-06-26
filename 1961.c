#include <stdio.h>
 
int main() {
    int pulo, i,cano[101],n,score;
    scanf("%d %d", &pulo,&n);
    score = 0;
    for(i = 1; i<n+1; i++){
        scanf("%d", &cano[i]);
    }
    for(i= 1; i<n; i++){
        if(  (cano[i] - cano[i+1] <= pulo) && (cano[i+1] - cano[i] <= pulo)) {
            score++;
        }
    }
        
    if(score == n-1){
        printf("YOU WIN\n");
    }else{
        printf("GAME OVER\n");
    }
    return 0;
}