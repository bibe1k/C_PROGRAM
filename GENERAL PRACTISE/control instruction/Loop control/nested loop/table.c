#include <stdio.h>

int main() {
   
   int j;

// Prompt the user to enter a value
   printf(" enter the value upto where you want to print even/odd number: ");
   scanf("%d", &j);

// Loop to iterate from 1 to the entered value
   for( int i = 1; i <= j; i++){

// Check if the current number is even
    if( i % 2 == 0){

// Print the serial number and the even number
    printf("%2d. Even numbers are: %d\n ", i, i);
   }

// If the number is not even, it's odd
   else if( i % 2 == 1)
   {

// Print the serial number and the odd number    
    printf("%2d. Odd numbers are: %d\n ", i, i);
   }


   }
    return 0;
}
