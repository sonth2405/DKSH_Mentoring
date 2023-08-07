// 별찍기


/* 사각형
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
	printf("*");
    }
    printf("\n");
}
*/

/* 직각 삼각형
for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){
	printf("*");
    }
    printf("\n");
}
*/

/* 직각삼각형 2
for(int i=0;i<5;i++){
    for(int j=0;j<5-i;j++){
	printf("*");
    }
    printf("\n");
}
*/

/* 피라미드
int num=5;
for(int i=0;i<num;i++){
    for(int j=num-1;j>i;j--){
        printf(" ");
    }
	    
    for(int j=0;j<2*i+1;j++){
	printf("*");
    }
    printf("\n");
}
*/
