#include <stdio.h>
 
int main() {
  int i;
  printf("---------------------------------------\n");
  for(i=0; i<5; i++){
    printf("|%38c\n", '|');
  }
   printf("---------------------------------------\n");
  return 0;
}