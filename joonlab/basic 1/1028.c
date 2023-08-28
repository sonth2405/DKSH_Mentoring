// No.1028 정렬 8

#include <stdio.h>

int main(void){
  int a1, b1;
  int a2, b2;

  scanf("%d %d", &a1, &b1);
  scanf("%d %d", &a2, &b2);

  if((a1<a2) || ((a1==a2)&&(b1<b2))){
    printf("%d %d\n", a2, b2);
    printf("%d %d\n", a1, b1);
  }
  else{
    printf("%d %d\n", a1, b1);
    printf("%d %d\n", a2, b2);
  }
  return 0;
}