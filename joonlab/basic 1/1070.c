// No.1070 연산자 16

#include <stdio.h>

int main(void){
  int a, b,c,d;
  scanf("%d %d %d %d", &a, &b,&c,&d);

  printf("%d %d %d %d %d %d %d %d\n", 
  a == b && c == d, 
  a == b || c == d, 
  a != b && c != d, 
  a != b || c != d, 
  !a,
  !b,
  !c,
  !d);

  return 0;
}