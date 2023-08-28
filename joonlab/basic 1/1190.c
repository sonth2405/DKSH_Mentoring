// No.1190 배열 1

/*

*/

#include <stdio.h>

int find_num(int arr[],int size){

  int flag = 0;

  for(int i=0; i<size; i++){
    if(arr[i]==5){
      flag = 1;
      break;
    }
  }

  return flag;
}


int main() {

  int x[] = {1, 3, 5, 2, 4, 6};
  int size = sizeof(x) / sizeof(int);

  printf("%d\n",find_num(x,size));

  return 0;
}