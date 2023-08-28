// No.1175 문자열 15

/*

*/

#include <stdio.h>
#include <string.h>


int main() {

  char x[] = "JoonLab";
  int flag = 1;

  for (int i = 0; i < strlen(x);i++){
    if( x[i] >= 'A' && x[i] <= 'Z'){
      flag = 0;
    }
  }

  printf("%d\n", flag);

  return 0;
}