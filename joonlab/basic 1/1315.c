#include <stdio.h>

int main(void){
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int sum = 0;
  for (int i = 0; i < 2;i++){
    for (int j = 1; j < 3;j++){
      sum += arr[i][j];
    }
  }

  printf("%d\n", sum);

  return 0;
}