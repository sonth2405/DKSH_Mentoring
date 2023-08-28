// No.1127 반복문 1

#include <stdio.h>

int main() {
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 2-i; j++){
      printf(" ");
    }

    for (int j = 0; j < 2 * i + 1;j++){
      printf("*");
    }
    
    printf("\n");
  }

  return 0;
}