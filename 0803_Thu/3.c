// 반복문
// do while문

#include <stdio.h>

int main(void) {

  int input;
  int password = 5684;

  do {
    printf("비밀번호를 맞춰주세요: ");
    scanf("%d", &input);
    input = 0;
  } while (password != input);

}