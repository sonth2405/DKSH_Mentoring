// No.1009 변숫값 교환1
#include <stdio.h>

int main(void){
  int arr[3]={0};
  int i, j;

  for(int i = 0; i < 3; i++){
    scanf("%d ", &arr[i]);
  }
  scanf("%d %d", &i, &j);

  int temp;
  temp = arr[i - 1];
  arr[i - 1] = arr[j - 1];
  arr[j - 1] = temp;

  for(int i = 0; i < 3; i++){
    printf("%d ", arr[i]);
  }

  return 0;
}