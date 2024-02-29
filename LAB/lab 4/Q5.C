//5)	Write a program to check if the given number is palindrome or not.

#include<stdio.h>

int main(){

     int num, new_number=0, rem;

     printf("\nEnter number:");
     scanf("%d", &num);

     for(int i = num; i > 0; i = i / 10){

          rem = i % 10;
          new_number = new_number * 10 + rem;
     
     }

     if(new_number == num){
          printf("The number %d is palindrome number.\n", num);
     }

     else{
          printf("The number %d is not palindrome number.\n", num);
     }
     return 0;
 }