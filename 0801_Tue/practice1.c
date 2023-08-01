#include <stdio.h>

int main(void){
    int month;
    scanf("%d",&month);

    switch(month){
        case 3: case 4: case 5:
            printf("봄");
            break;
    }
}