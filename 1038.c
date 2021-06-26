#include <stdio.h>
 
int main(){
  float qtd, cod, cash;

  scanf("%f %f", &cod, &qtd);

  if( cod == 1){
    cash = qtd * 4;
  }

  if( cod == 2){
    cash = qtd * 4.50;
  }

  if( cod == 3){
     cash = qtd * 5;
  }

  if( cod == 4){
    cash = qtd * 2;
  }

  if( cod == 5){
    cash = qtd * 1.50;
  }
  
  printf("Total: R$ %.2f\n", cash);
  return 0;
}