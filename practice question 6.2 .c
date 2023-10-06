/* write a program having a variable i . print the address of i . pass this variable to a function and print its address . Are these addresses same? why?*/
#include<stdio.h>
void printadd(int a);
int main(){

int i=4;
printf("displaying the value of variable i which is  %d \n",i);
printadd(i);
printf("the address of variable i is %u\n",&i);


















return 0;

}
void printadd(int a){
    printf("the address of variable a is %u \n",&a);






}
