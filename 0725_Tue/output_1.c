// 입출력 1
#include <stdio.h>

int main(void){

  // printf 기본 사용법
  printf("단대소고 멘토링 3차시\n\n");

  printf("탭은\t 이런 식으로 기능\n\n");

  // 형식 지정자 기초 - 정수
  int num1 = 17;
  int num2 = 435;
  int year = 1119;

  printf("--- 형식 지정자 기초 : 정수 ---\n");
  printf("num : %d\n", num1);
  printf("num1 : %d    num2 : %d\n\n", num1, num2);
  printf("나는 %d년에 태어났습니다.\n\n",year);

  return 0;
}


// 연습문제 : 생년월일 말하기
// 자신의 생년월일에 맞춰 다음과 같은 형식으로 출력하세요.
// 나는 ____년 __월 __일에 태어났습니다.
// * 변수명은 의미를 담아서!