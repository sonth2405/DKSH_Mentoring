#include <stdio.h>

int main(void){
  float f = 3.1415F;
  double d = 42.3876547;

  
  printf("f : %f\n", f);
  printf("d : %f\n\n", d); // 6자리까지만 출력 가능

  int n = 7629;
  
  printf("--- 출력폭 지정 ---\n");
  printf("%10d\n", n);
  printf("----------\n");
  printf("%-10d\n\n", n);


  printf("%.4f\n", d);
  printf("%10.4f\n", d);
  printf("%10.7f\n\n", d);

  printf("%-10.4f\n", d);
  printf("%+10.4f\n", d);
  printf("%+-10.4f\n\n", d);
  
  // d = 42.3876547

  // d = 42

  printf("%15f\n", d);
  printf("%5f\n", d);

  return 0;
}