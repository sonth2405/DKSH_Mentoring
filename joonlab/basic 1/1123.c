// No.1125 조건문4

#include <stdio.h>
int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  if(a >= 90 && b >= 90){
    printf("A\n");
  }
  if(a >= 90 && b < 90){
    printf("B\n");
  }
  if(a < 90 && b >= 90){
    printf("C\n");
  }
  if(a < 90 && b < 90){
    printf("D\n");
  }

  return 0;
}