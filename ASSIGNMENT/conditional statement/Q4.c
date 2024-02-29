// Leap year: Write a program to check whether a given year is leap year or not 

#include<stdio.h>

int main() {

    // Declaring variable 
    int year;

    // Taking input from the user 
    printf("Enter year according to English calendar:");
    scanf("%d",&year);

    // Checking whether a given year is leap year or not 
    if((year%4==0 && year%100!=0) || (year%400==0)) {
        printf("The year %d is leap year.",year);
    }

    else {
        printf("The year %d is not leap year.",year);
    }

    return 0;
}
