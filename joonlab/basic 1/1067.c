// No.1067 연산자 13

#include <stdio.h>

int main(void){
  int a, b;
  scanf("%d %d", &a, &b);

  printf("%d %d %d %d %d %d\n", a > b, a >= b, a < b, a <= b, a == b,a!=b);

  return 0;
}