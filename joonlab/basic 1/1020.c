// No.1020 입출력 함수6

/*
16진수에 영문자가 포함될 경우 소문자로 출력하자.
-> 해당 조건을 만족하기 위해서 %x를 사용
-> %x와 %X의 차이에 대한 설명
-> 추가적으로 %x와 %#X에 대한 설명
*/

#include <stdio.h>

int main(void){
  char a;
  scanf("%c", &a);

  printf("%x\n", a);

  return 0;
}