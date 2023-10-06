/*write a program to print the address of the variable . use this address to get the value of this variable*/
#include<stdio.h>
int main(){

int a=3;
int *ptr;
ptr=&a;
printf("the address of the variable a is %u\n",&a);
printf("the value of variable a is %d\n",*ptr);


}
