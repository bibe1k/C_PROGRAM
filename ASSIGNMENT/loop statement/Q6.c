//Program to reverse the number.Example 321 -> 123, 1234 -> 4321

#include<stdio.h>

int main(){

     int n,reverse_number=0,reminder;

     printf("Enter number:");
     scanf("%d",&n);

     for(int i=n; i!=0; i=i/10){
          reminder=i%10;
          reverse_number=reverse_number*10+reminder;
     }

          printf(" Reverse number  %d is %d \n", n, reverse_number);
     
     return 0;
}