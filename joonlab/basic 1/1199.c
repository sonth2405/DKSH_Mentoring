// No.1199 딕셔너리 1

/*

*/

#include <stdio.h>

struct grade{
  char name[20];
  int score;
};

int main() {

  struct grade seojoon = {"SeoJoon",100};
  struct grade gildong = {"GilDong",90};
  struct grade cheolsoo = {"CheolSoo",90};


  printf("%d\n", seojoon.score);
  return 0;
}