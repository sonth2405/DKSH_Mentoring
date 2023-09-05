#include <stdio.h>
#include <string.h>

int main(void){
  char orign[] = {'a', 'b', 'c', 'd', 'e'};
  char change[] = {'T', 'C', 'P', 'Q', 'A'};

  char str[] = "abcde";
  int size_str = sizeof(str) / sizeof(char);
  int size_orign = sizeof(orign) / sizeof(char);

  for (int i = 0; i < size_orign; i++){
    char *ptr = strchr(str, orign[i]);
    if(ptr){
      *ptr = change[i];
    }
  }

  puts(str);

  return 0;
}