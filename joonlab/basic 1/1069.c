// No.1068 연산자 14

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