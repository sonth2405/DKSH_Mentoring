// 지역변수

#include <stdio.h>

int ReturnNum(){
  int num = 5;
  return num;
}

void main(){
  ReturnNum();
  printf("%d\n", num);
}