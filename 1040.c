#include <stdio.h>
 
int main(){
  float n1, n2, n3, n4, media, exame;

  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

  n1 = n1 * 2;
  n2 = n2 * 3;
  n3 = n3 * 4;
  n4 = n4 * 1;

  media = (n1 + n2 + n3 + n4) / 10;

  printf("Media: %.1f\n", media);

  if( media>= 7){
    printf("Aluno aprovado.\n");
  }

  if(media < 5){
    printf("Aluno reprovado.\n");
  }

  if( (media>=5) && (media<7)){
    printf("Aluno em exame.\n");
    scanf("%f", &exame);
    printf("Nota do exame: %.1f\n", exame);
    media = (media + exame) / 2;
    if(media>=5){
      printf("Aluno aprovado.\n");
      printf("Media final: %.1f\n", media);
    }else{
      printf("Aluno reprovado.\n");
      printf("Media final: %.1f\n", media);
    }
  }

  return 0;
}