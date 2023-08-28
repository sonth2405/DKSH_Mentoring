// No.1181 연산자 17

/*
math.h
-> pow 함수 설명
-> pow는 기본적으로 double 형을 채택하기 때문에
int 형으로 강제 형변환 해야 하는 점을 강조
*/

#include <stdio.h>
#include <math.h>


int main() {

  printf("%d %d\n",(int)pow(2,7),(int)pow(7,2));
  return 0;
}