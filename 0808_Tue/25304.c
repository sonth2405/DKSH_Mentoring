#include <stdio.h>

int main(void){

    int i; 
    int price_all, num_all; // 전체 가격, 전체 개수
    int price, num; // 가격 * 개수
    int sum = 0;

    scanf("%d ",&price_all);
    scanf("%d",&num_all);

    for(i=1; i<= num_all;i++)
    {
        scanf("%d %d",&price, &num);
        sum += price*num;
    }

    if(sum == price_all){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}