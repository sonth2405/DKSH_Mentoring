// No.1295 정수 9

/*

*/

#include <stdio.h>

int main(void){

  int t, x, y;
  t = 0;

  while(1){
    x = 3 * (t/2 + 1);
    y = 5 * (t / 3 + 1);
    if(x+y>=12){
      break;
    }
    else{
      t++;
    }
  }
  printf("%d", t);

  return 0;
}