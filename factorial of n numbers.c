
#include <stdio.h>

int main(){
    int num , count , factorial=1;
    printf("enter a number to find its factorial \n");
    scanf("%d" , &num);
    for(count=1 ; count<=num ; count++){


        factorial=factorial*count;

    }
    printf("factorial od %d is %d \n" , num , factorial);
    return 0;
}
