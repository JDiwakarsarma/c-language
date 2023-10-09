/*create an array of 10 numbers . verify using pointer arithematic that (ptr + 2) points to the third element where ptr is a
pointer pointing to the first element of the array*/






#include<stdio.h>
int main(){

int arr[10];
int *ptr = arr;
ptr = ptr + 2;
if(ptr==&arr[2]){

    printf("these point to same location in memory");

}
else{

    printf("these point to different location in memory");

}










return 0;
}
