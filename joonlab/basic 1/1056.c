// No.1056 연산자1

/*
스택 사용 불가
-> if문과 switch문을 사용하여 설명
-> char 를 2개 이상 입력 받을 때 오류 발생 주의
-> 입력 범위 증가로 인해 long long int 사용
*/
#include <stdio.h>

int main(void){
  long long int a, b, c;
  char op1, op2;
  long long int result = 0;
  scanf("%lld %lld %lld ", &a, &b, &c);
  scanf("%c %c", &op1, &op2);

  if(op1 == '+'){
    switch(op2){
      case '+':
        result = a + b + c;
        break;
      case '-':
        result = a + b - c;
        break;
      case '*':
        result = a + b * c;
        break;
      case '/':
        result = a + b / c;
        break;
    }
  }
  else if(op1 == '-'){
    switch(op2){
      case '+':
        result = a - b + c;
        break;
      case '-':
        result = a - b - c;
        break;
      case '*':
        result = a - b * c;
        break;
      case '/':
        result = a - b / c;
        break;
    }
  }
  else if(op1 == '*'){
    switch(op2){
      case '+':
        result = a * b + c;
        break;
      case '-':
        result = a * b - c;
        break;
      case '*':
        result = a * b * c;
        break;
      case '/':
        result = a * b / c;
        break;
    }
  }
  else if(op1 == '/'){
    switch(op2){
      case '+':
        result = a / b + c;
        break;
      case '-':
        result = a / b - c;
        break;
      case '*':
        result = a / b * c;
        break;
      case '/':
        result = a / b / c;
        break;
    }
    
  }
  printf("%lld\n", result);

  return 0;
}