/* write a program to change the value of a variable to ten times of its current value. write a function and pass the value by reference. */

#include<stdio.h>
void swap(int *a , int *b);

int main(){
    int k=2;
    int j=20;
    printf("initial values of k and j are %d , %d \n",k,j);
    swap(&k,&j);
    printf("after swapping  the values of k and j are %d , %d",k,j);











return 0;
}
void swap(int *a , int *b){

int temp;
temp =*a;
*a=*b;
*b=temp;




}
