// 1304 수학 

#include <stdio.h>

int main(void){
  int x, y, z;
  int min;

  x = 17 / 10;
  y = (17 % 10) / 5;
  z = (17 % 10) % 5;
  min = x + y + z;
  printf("%d\n", min);
  return 0;
}