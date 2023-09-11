#include <stdio.h>

int main(void){
  int cs[] = {1, 5, 7};
  int yh[] = {1, 3, 8};


  int count_all = 0;
  

  // count_all
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3;j++){
      if(cs[i]==yh[j]){
        count_all++;
        break;
      }
    }
  }
  int size_cs = sizeof(cs) / sizeof(int);
  int size_yh = sizeof(yh) / sizeof(int);

  int count_none = 10 - (size_cs + size_yh) + count_all;

  printf("%d %d", count_none, count_all);

  return 0;
}