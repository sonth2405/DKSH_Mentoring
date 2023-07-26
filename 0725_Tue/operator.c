#include <stdio.h>

int main(void)
{
  int num1 = 10;
  int num2 = 3;

  printf("num1 + num2 = %d\n", num1 + num2);
  printf("num1 - num2 = %d\n", num1 - num2);
  printf("num1 * num2 = %d\n", num1 * num2);

  printf("num1 / num2 = %d\n", num1 / num2); 
  printf("num1 / num2 = %f\n", num1 / num2); 
  printf("num1 / num2 = %f\n", (float) num1 / num2); 
  printf("num1 %% num2 = %d\n", num1 % num2); 

  int num3 = 0; // FALSE)
  int num4 = 1; // TRUE

  printf("%d\n", 1 && 1 );
  printf("%d\n", !1);

  return 0;
}