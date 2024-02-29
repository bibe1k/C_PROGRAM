//Write a program to count the digits in a number.

#include<stdio.h>

int main(){

     int n, reminder;

     printf("\nEnter number:");
     scanf("%d", &n);

     int digits=0;

     while(n>0){
          reminder=n%10;
          n/=10;
          digits++;
     }
     printf("Number of digits are %d", digits);
     }