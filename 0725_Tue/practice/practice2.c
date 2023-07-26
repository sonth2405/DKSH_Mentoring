// 연습문제 : 생년월일 말하기
// 자신의 생년월일을 입력 받아 다음과 같은 형식으로 출력하세요.
// 나는 ____년 __월 __일에 태어났습니다.
// * 변수명은 의미를 담아서!

#include <stdio.h>

int main(void){

    int year, month, day;
    
    printf("태어난 년도, 태어난 달, 태어난 날자를 적어주세요:");
    scanf("%d %d %d", &year, &month, &day );

    printf("나는 %d년 %d월 %d일에 태어났습니다", year, month, day);

    return 0;
}