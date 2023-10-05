#include<stdio.h>
int sum(int n);



int main(){
    int no;
    printf("enter the desired no");
    scanf("%d",&no);
    printf("summation of first %d natural numbers =%d \n",no,sum(no));



return 0;

}
int sum(int n){

  if(n==0){
    return 0;

   }

   else{
    return (n+sum(n-1));
       }





}
