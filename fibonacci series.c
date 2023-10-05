#include<stdio.h>
int fibonacci(int);

int main(){
int num,i;
printf("enter the desired limit");
scanf("%d",&num);
for(i=0;i<num;i++){

    printf("%d",fibonacci(i));

}


return 0;
}


int fibonacci(int n){

if(n==0){
    return 0;
}
else if(n==1){
    return 1;

}
else{

    return fibonacci(n-1) + fibonacci(n-2);
}


}
