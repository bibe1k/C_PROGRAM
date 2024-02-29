//Create a for loop to print the multiplication table of a given number.

#include<stdio.h>

int main(){

// declaring variable for input
int n;

//taking input
printf("Enter a number: ");
scanf("%d", &n);

printf("multiplication of %d is:\n", n);

//initializing for loop
for( int a=1; a<=10; a++)
{
printf(" %d * %d = %d \n" ,n,a ,n*a);
}
    return 0;
}