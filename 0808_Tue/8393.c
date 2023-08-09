/*
1부터 n까지의 합
*/

#include <stdio.h>

int main(void){
    int i, num;
    scanf("%d",&num);

    int sum = 0;
    for(i = 1; i<=num;i++)
    {
        printf("sum : %d i : %d\n",sum,i);
        sum = sum + i;
    }
    printf("%d\n",sum);
}