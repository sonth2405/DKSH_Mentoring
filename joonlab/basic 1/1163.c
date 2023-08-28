// No.1164 문자열 8

/*
문자열 길이를 구한 후, 뒤에서 5번째로 인덱스 조정
-> strlen 설명
*/

#include <stdio.h>
#include <string.h>


int main() {

  char x[] = "JoonLab";
  int size;

  size = strlen(x);
  printf("%c\n", x[size-5]);


  return 0;
}