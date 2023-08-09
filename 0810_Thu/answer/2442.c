#include <stdio.h>

int main(void){
  int i, j, num;

  scanf("%d", &num);

  for (i = 0; i < num;i++){
    for (j = 0; j < num - 1 - i;j++){
      printf("\n");
    }
    for (j = 0; j<(i*2)+1;j++){
      printf("*");
    }
    printf("\n");
  }
}