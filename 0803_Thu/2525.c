#include <stdio.h>

int main(void){
    int hour, minute;
    int time;

    scanf("%d %d",&hour, &minute);
    scanf("%d",&time);

    int sum = hour*60 + minute + time;

    if(sum/60 >=24){
        printf("%d %d\n",sum/60-24,sum % 60);
    }
    else{
        printf("%d %d\n",sum/60,sum%60);
    }
}