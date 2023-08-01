#include <stdio.h>

int main(void)
{
    int hour, minute;
    scanf("%d %d\n",&hour, &minute);

    if(minute >= 45){
        printf("%d %d\n", hour, minute-45);
    }
    else if(minute<45 && hour > 0){
        printf("%d %d\n",hour-1,minute + 15);
    }
    else{
        printf("%d %d",23,minute +15);
    }

    return 0;
}