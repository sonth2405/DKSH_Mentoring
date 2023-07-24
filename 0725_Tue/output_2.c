#include <stdio.h>

int main(void)
{
  int num = 255;

  printf("--- 진법에 따른 형식지정자 ---\n");
  // 10진수
  printf("d : %d\n", num);   
  printf("i : %i\n", num);  

  // 8진수
  printf("o : %o\n", num);   
  printf("#o : %#o\n", num);  

  // 16진수
  printf("x : %x\n", num);   
  printf("#x : %#x\n", num);  
  printf("X : %X\n", num);
  printf("#X : %#X\n\n", num);

  int unsigned_int = -1;
  printf("--- unsigned integer ---\n");
  printf("unsigned integer : %d\n", unsigned_int);
  printf("unsigned integer : %u\n\n", unsigned_int);

  return 0;
}