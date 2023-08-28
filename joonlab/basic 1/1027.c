// No.1027 정렬 7

#include <stdio.h>

int main(void){
  int a1, b1;
  int a2, b2;

  scanf("%d %d", &a1, &b1);
  scanf("%d %d", &a2, &b2);

  if((a1<a2) || ((a1==a2)&&(b1<b2))){
    printf("%d %d\n", a1, b1);
    printf("%d %d\n", a2, b2);
  }
  else{
    printf("%d %d\n", a2, b2);
    printf("%d %d\n", a1, b1);
  }
  return 0;
}