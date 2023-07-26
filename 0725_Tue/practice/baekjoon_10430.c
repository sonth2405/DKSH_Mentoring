// baekjoon 10430

#include <stdio.h>

int main(void){
    
    int A, B, C;
    printf("A, B, C의 값을 입력해주세요 : ");
    scanf("%d %d %d", &A, &B, &C);

    printf("%d\n", (A+B)%C);
    printf("%d\n", ((A%C)+(B%C))%C );
    
    return 0;
}