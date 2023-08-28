// No.1126 조건문5

#include <stdio.h>
#include <stdbool.h>
int main() {
  int p;
  scanf("%d", &p);

  switch(p/10){
    case 10: case 9:
      printf("A\n");
      break;
    case 8:
      printf("B\n");
      break;
    case 7:
      printf("C\n");
      break;
    case 6:
      printf("D\n");
      break;
    default:
      printf("E\n");
      break;
  }

  return 0;
}