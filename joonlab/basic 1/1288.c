// No.1287 정수 1

/*

*/

#include <stdio.h>

int main(void){

  int t, x;
  t = 0;
  x = 3 * (t/2 + 1);

  while(1){
    x = 3 * (t/2 + 1);
    if(x>=12){
      break;
    }
    else{
      t++;
    }
  }
  printf("%d", t);

  return 0;
}