#include<stdio.h>
void printarray(int *ptr,int n){
 for(int i=0 ; i<n ; i++){

    printf("the value of element %d is %d \n",i+1 ,*(ptr +1));




 }











}


int main(){

int arr[]={1,2,3,4,5,6,7};
printarray(arr,6);




















return 0;
}
