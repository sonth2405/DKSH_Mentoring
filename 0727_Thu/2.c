// 논리 연산자

#include <stdio.h>
#include <stdbool.h>

// true false => bool 형 
// int 정수형 자료형
// double 실수형
// char 문자형

int main(void){

  printf(" false && false : %s\n", false&&false); // false
  printf(" false && true : %d\n", false&&true); // false
  printf(" true && false : %d\n", true&&false); // false
  printf(" true && true : %d\n\n", true&&true); // true

  printf(" false || false : %d\n", false&&false); // false
  printf(" false || true : %d\n", false&&true); // true
  printf(" true || false : %d\n", true&&false); // true
  printf(" true || true : %d\n", true&&true); // true

  return false;
}