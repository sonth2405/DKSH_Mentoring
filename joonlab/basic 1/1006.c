// No.1006 성적 관리 프로그램1


int main(void){
  int k, m, e, s, c; 
  int t; 
  int sum, avg;

  scanf("%d %d %d %d %d %d", &k, &m, &e, &s, &c, &t);
  sum = k + m + e + s + c;
  avg = sum / 5;

  printf("%d %d\n", sum, avg);
}