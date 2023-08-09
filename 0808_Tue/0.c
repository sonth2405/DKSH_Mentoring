// 중첩 반복문

// 이중 반복문
// 이중 for 문
// for문 안에 for문이 존재


#include <stdio.h>

int main(void){

  int i, j;
  printf("---------- 구구단을 외자 -----------\n");
  for (i = 2; i <= 9;i++) // 몇 단인지를 설정
  {
    for (j = 1; j <= 9;j++){
      printf("%d * %d = %d\t", i, j, i * j);
    }
    printf("\n");
  }
}