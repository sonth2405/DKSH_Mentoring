// No.1188 배열 1

/*

*/

#include <stdio.h>

int find_max(int arr[],int size){
  int max = arr[0];

  for (int i = 1; i < size;i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }

  return max;
}

int find_min(int arr[],int size){
  int min = arr[0];

  for (int i = 1; i < size;i++){
    if(arr[i] < min){
      min = arr[i];
    }
  }

  return min;
}

int add_all(int arr[],int size){
  int sum = 0;
  

  for (int i = 0; i < size;i++){
    sum += arr[i];
  }

  return sum;
}


int main() {

  int x[] = {1, 3, 5, 2, 4, 6};
  int size = sizeof(x) / sizeof(int);
  printf("%d %d %d\n", find_min(x,size), find_max(x,size), add_all(x,size));

  return 0;


}