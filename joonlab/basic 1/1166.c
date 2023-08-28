// No.1166 문자열 10

/*

*/

#include <stdio.h>
#include <string.h>


int main() {

  char x[] = "JoonLab";

  for (int i = 3; i <= 5;i++){
    printf("%c", x[i - 1]);
  }

  return 0;
}