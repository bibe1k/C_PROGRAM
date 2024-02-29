//4)	WAP to calculate and display the sum of the digits present in the given number.

#include<stdio.h>

int main(){

     int num, rem, sum = 0;

     printf("\nEnter number: ");
     scanf("%d", &num );

     for(int i = num; i > 0; i = i / 10){

          rem =i % 10;
          sum+=rem;
     }

     printf("Sum of the digits present in %d is: %d", num,sum );

     return 0;
}