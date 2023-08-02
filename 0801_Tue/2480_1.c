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