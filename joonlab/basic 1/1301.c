// 1301 수학 1

#include <stdio.h>

int main(void){
  int x = 0;
  int y;

  int min = 13;

  for (int i = 0; i <= (13 / 5); i++){
    y = 13 - 5 * x;

    if(x+y<=min){
      min = x + y;
    }
    x++;
  }
  printf("%d\n", min);
  return 0;
}