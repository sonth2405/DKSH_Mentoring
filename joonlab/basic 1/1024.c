// No.1024 정렬 4

/*
세 수의 비교이기 때문에 제어문으로 진행 시 6가지 경우 발생
-> 간단한 sorting 알고리즘 소개 (Bubble)
*/

#include <stdio.h>

# define SIZE 3
int main(void){

  int arr[SIZE];
  int temp = 0;

  for (int i = 0; i < SIZE; i++){
    scanf("%d ", &arr[i]);
  }

  //오름차순 정렬 (Bubble)
  for (int i = 0; i < SIZE - 1; i++)
  {
    for (int j = 0; j < SIZE - 1 - i; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        temp       = arr[j];
        arr[j]     = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < SIZE; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}