// 조건문 3

#include <stdio.h>

int main(void)
{
  double gpa = 3.7;

  if (gpa >= 4.2){
    printf("전액 장학금 대상자입니다.\n");
  }
  else if ( gpa < 4.2 && gpa >= 3.8){
    printf("반액 장학금 대상자입니다.\n");
  }
  else {
    printf("장학 대상자가 아닙니다.\n");
  }

  return 0;
}