// SWITHCH
// 여러가지 case가 존재할 경우 if보다 효율적으로 사용 가능함

#include <stdio.h>

int main(void)
{
  double x, y, result;
  int op;

  printf("두 실수를 입력 : ");
  scanf("%lf %lf", &x, &y); // scanf에서 double을 받을 땐 lf 사용
  printf("연산자 선택 1(+), 2(-), 3(*), 4(/) : ");
  scanf("%d", &op);



  switch(op){
    case 1:
      printf("%.2f + %.2f = %.2f", x, y, x + y);
      break;

    case 2:
      printf("%.2f - %.2f = %.2f", x, y, x - y);
      break;

    case 3:
      printf("%.2f * %.2f = %.2f", x, y, x * y);
      break;

    case 4:
      printf("%.2f / %.2f = %.2f", x, y, x / y);
      break;

    default:
      printf("번호를 잘못 선택하셨습니다.\n");
      break;
  }
  return 0;
}

//연습문제
// 월 을 입력 받아 계절을 출력하는 코드
// 