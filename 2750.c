#include <stdio.h>
 
int main() {
  int i, a[15];
  
  printf("---------------------------------------\n");
  printf("|");
  printf("  decimal%2c|  octal%2c|  Hexadecimal%2c|", ' ', ' ', ' ');
  printf("\n");
  printf("---------------------------------------\n");

  for (i = 0; i<16; i++){
    a[i]= i;
  }
  for (i = 0; i<16; i++){
  printf("|%7i%4c|%5o%4c|%8X%7c|\n", a[i],' ', a[i], ' ', a[i], ' ');
  }
  printf("---------------------------------------\n");


  return 0;
   
   
   
}