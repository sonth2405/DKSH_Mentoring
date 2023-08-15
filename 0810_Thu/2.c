// 연습문제

// 1부터 n까지의 곱 중에서 10000을 넘지 않는 가장 큰 곱과 그 때의 n 값을 구하시오.

#include <stdio.h>

int main(void){
    // 합 & n

    int sum = 1;
    int num;
    int i;

    for(i=1;sum*i<=10000;i++){
        sum = sum * i;
    }

    printf("%d %d\n",sum,i-1);
}