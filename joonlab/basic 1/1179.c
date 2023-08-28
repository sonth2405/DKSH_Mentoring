// No.1179 문자열 19

/*
strstr 함수에 대해 설명
*/

#include <stdio.h>
#include <string.h>


int main() {

  char x[] = "JoonLab";
  if(strstr(x,"Lab")!=NULL){
    printf("1");
  }
  else{
    printf("0");
  }

  return 0;
}