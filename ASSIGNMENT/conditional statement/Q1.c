// Even or Odd. Write a program to check whether a given number is odd or even 

#include<stdio.h>

int main() {
   
     //Declaring variable
    int num;

    // Taking input from user 
    printf("Enter the number:");
    scanf("%d",&num);

    // Checking whether the given number is odd or even 
    if(num%2==0) {
        printf("The given number %d is even",num);
    }

    else {
        printf("\nThe given number %d is odd",num);
    }

    return 0;
}
