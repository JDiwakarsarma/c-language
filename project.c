

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int number , guess , ngussess = 1;
    srand(time(0));
    number = rand()%100 + 1;
    printf("the number is %d",number);
    do{
        printf("guess the number between 1 to 100 \n");
        scanf("%d",&guess);
        if(guess > number){


            printf("lower number please\n");

        }
        else if(guess < number){


            printf("higher number please\n");

        }
        else{

            printf("you have guessed the correct number in %d attempt\n" ,ngussess);

        }
        ngussess++;








    }while(guess!=number);

    return 0;
}