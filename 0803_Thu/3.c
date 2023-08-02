// 반복문
// do while문

#include <stdio.h>

int main(void) {

  int input;

  do{
    printf("정수 또는 0(종료)를 입력: ");
    scanf("%d", &input);
  } while (input != 0);


}