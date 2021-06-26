#include <stdio.h>

int main() {
  int i, a[26];

  a[0]= 97;

  for(i=1;i<26;i++){
    a[i] = a[i-1] + 1;
  }
  for(i=0;i<26;i++){
    printf("%d e %c\n", a[i], a[i]);
  }
  return 0;
}