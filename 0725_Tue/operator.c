#include <stdio.h>

int main(void)
{
  int num1 = 10;
  int num2 = 3;

  printf("num1 + num2 = %d\n", num1 + num2);
  printf("num1 - num2 = %d\n", num1 - num2);
  printf("num1 * num2 = %d\n", num1 * num2);
  printf("num1 / num2 = %d\n", num1 / num2);
  printf("num1 / num2 = %f\n", (float) num1 / num2);
  printf("num1 %% num2 = %d\n", num1 % num2);

  return 0;
}