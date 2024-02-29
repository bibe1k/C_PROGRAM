//2)	Calculate and display the sum of odd natural numbers upto n term.

#include<stdio.h>

int main(){

     int n, i, sum=0;

     printf("\nEnter number:");
     scanf("%d", &n);

     for( i=1; i<=10; i++){

          if(i % 2==1){

          sum+= i;
     }
     }
               printf("sum of odd natural numbers upto %d is %d\n ", n, sum);

     return 0;
}