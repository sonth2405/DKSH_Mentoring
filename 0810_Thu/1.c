// 연습문제 1

// 1부터 n까지의 합 중에서 10000을 넘지 않는 가장 큰 합과 그때의 n 값을 구하는 프로그램

#include <stdio.h>

int main(void){
    // 합 & n

    int sum = 0;
    int num;
    int i;

    for(i=1;i<=5050;i++){
        printf("%d\n",i);
        if (sum + i>5050){
            printf("Break!\n");
            break;
        }
        else{
            sum = sum+i;
            num = i;
            printf("Else\n");
        }
    }

    printf("%d %d\n",sum,num);
}