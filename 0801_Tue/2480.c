#include <stdio.h>

int main(void){
    int d1,d2,d3;
    scanf("%d %d %d",&d1,&d2,&d3);

    if (d1 == d2 && d2 == d3){
        printf("%d\n", 10000 + d1 * 1000);
    }
    else if (d1 != d2 && d2 != d3 && d3 != d1){
        int max = 0;
        if (d1 > d2 && d1 > d3){
            max = d1;
        }  
        else if (d2 > d1 && d2 > d3){
            max = d2;
        }
        else{
            max = d3;
        }
        printf("%d\n",max*100);      
    }
    else{
        if(d1 == d2 || d1 ==d3){
            printf("%d\n",1000+ d1 *100);
        }
        else{
            printf("%d\n",1000+d2*100);
        }
    }
}