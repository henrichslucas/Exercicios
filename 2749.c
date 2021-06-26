#include <stdio.h>
 
int main() {
  int i;
  
  printf("---------------------------------------\n");
  printf("|");
  printf("x = 35");
  printf("%31c|", ' ');
  printf("\n");
  printf("|");
  printf("%37c|", ' ');
  printf("\n");
  printf("|");
  printf("%15cx = 35",' ');
  printf("%16c|", ' ');
  printf("\n");
  printf("|");
  printf("%37c|", ' ');  
  printf("\n");
  printf("|");
  printf("%31cx = 35",' ');
  printf("|");
  printf("\n");
  printf("---------------------------------------\n");
  return 0;
   
   
   
}