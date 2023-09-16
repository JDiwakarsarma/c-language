#include <stdio.h>

int main(){
    int i=1;
    do{
        printf("the value is %d \n" ,i);
        i++;
        if(i==7){

            break;
        }
    }while(i<20);
    return 0;
}
