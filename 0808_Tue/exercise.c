#include <stdio.h>

int main(void){
    int num,i,j,k;
    scanf("%d",&num);
    for(i = 1; i <= num;i++){
        for(int j =1; j <= num - i; j++){
            printf("_");
        }
        for(int k = 1; k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

____* n - i
___**
__***
-****
*****

*/

