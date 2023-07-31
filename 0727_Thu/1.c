// 관계 연산자

// 변수 간의 관계를 나타내주는 연산자

#include <stdio.h>

int main(void){

  int x = 3;
  int y = 5;

  printf(" x > y : %d\n", x > y); // 0
  printf(" x >= y : %d\n", x >= y); // 0

  printf(" x < y : %d\n", x < y); // 1
  printf(" x <= y : %d\n", x <= y); // 1

  printf(" x == y : %d\n", x == y); // 0
  printf(" x != y : %d\n", x != y); // 1


  return 0;
}