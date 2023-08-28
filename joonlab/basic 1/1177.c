// No.1177 문자열 17

/*

*/

#include <stdio.h>
#include <string.h>


int main() {

  char x[] = "JoonLab";
  int flag = 1;

  for (int i = 0; i < strlen(x);i++){
    if( x[i] >= 'a' && x[i] <= 'z'){
      flag = 0;
    }
  }

  printf("%d\n", flag);

  return 0;
}