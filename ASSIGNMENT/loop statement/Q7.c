//Write a program to get the sum of digits in a number. Example 12345, sum=1+2+3+4+5=15

#include<stdio.h>

int main(){

     int n, reminder,sum=0;

     printf("\nEnter number: ");
     scanf("%d", &n);

     for(int i=n; i!=0; i/=10){
          reminder=i%10;
          sum= sum+reminder;

     }

          printf("Sum is %d is %d:",n,sum);
     
 return 0;
}