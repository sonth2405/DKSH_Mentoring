#include <stdio.h>;

int main(void){

    int num1, num2;
    printf("숫자 두개를 입력 해주세요");
    scanf("%d %d", &num1, &num2);

    printf("%d\n", num1 * (num2 % 10));
    printf("%d\n", num1 * ((385 % 100)/10));
    printf("%d\n", num1 * (num2/100));
    printf("%d\n", num1 * num2);

}