// 1305 수학 

#include <stdio.h>

int main(void){
  int x, y, z;
  int min = 10;
  x = 0;
  for (int i = 0; i <= (10 / 8);i++){
    for (int j = 0; j <= ((10-8*i)/5);j++){
      y = j;
      z = 10 - 8 * x - 5 * y;
      if(min >= x + y + z ){
        min = x + y + z;
      }
    }
    x++;
  }

    printf("%d\n", min);
  return 0;
}