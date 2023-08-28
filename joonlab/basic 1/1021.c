// No.1021 정렬 1

/*
두 수의 비교이기 때문에 제어문으로 설명
*/

#include <stdio.h>

int main(void){

  int a1, a2;

  scanf("%d %d", &a1, &a2);

  if(a1<=a2){
    printf("%d %d\n", a1, a2);
  }
  else{
    printf("%d %d\n", a2, a1);
  }

  return 0;
}