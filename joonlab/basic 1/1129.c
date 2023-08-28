// No.1129 반복문 3


/*
정렬 조건에 따라 마지막 결과의 출력형식을 %2d로 지정
*/

#include <stdio.h>

int main() {
  for (int i = 1; i <= 9; i++){
    printf("%d x %d = %2d\n", 2, i, 2 * i);
  }

  return 0;
}