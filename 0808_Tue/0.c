#include <stdio.h>

int main(void){

  int i, j;
  printf("---------- 구구단을 외자 -----------\n");
  for (i = 2; i <= 9;i++)
  {
    for (j = 1; j <= 9;j++){
      printf("%d * %d = %d\t", i, j, i * j);
    }
    printf("\n");
  }
}