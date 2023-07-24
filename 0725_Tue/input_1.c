#include <stdio.h>

int main(void)
{

  int age;
  printf("나이를 입력하세요: ");
  scanf("%d", &age);

  printf("\n\n");
  printf("당신은 %d살입니다!\n", age);

  return 0;
}

// 연습문제 : 생년월일 말하기
// 자신의 생년월일을 입력 받아 다음과 같은 형식으로 출력하세요.
// 나는 ____년 __월 __일에 태어났습니다.
// * 변수명은 의미를 담아서!