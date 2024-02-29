#include<stdio.h>

int main(){

     int num1,num2;

     printf("enter num 1:");
     scanf("%d", &num1);

     printf("enter num 2:");
     scanf("%d", &num2);


     if(num1==num2){
          printf("num 1 and num 2 are equal.");
     }
     else{
          printf("num1 and num  are not equal.");
     }

     return 0;
}