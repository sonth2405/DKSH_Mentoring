// No.1055 연산자1

/*
스택 사용 불가
-> if문과 switch문을 사용하여 설명
-> char 를 2개 이상 입력 받을 때 오류 발생 주의
*/
#include <stdio.h>

int main(void){
  int a, b, c;
  char op1, op2;
  int result = 0;
  scanf("%d %d %d ", &a, &b, &c);
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
  printf("%d\n", result);

  return 0;
}