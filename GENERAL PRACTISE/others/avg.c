#include<stdio.h>

//WAP to print the average of 3 numbers



int main(){

    float a, b, c;

    printf("Enter three numbers: ");
    scanf(" %f %f %f", &a, &b, &c);

    float average;
    
    average=(a+b+c)/3;

    printf("Average is %f", average);

    return 0;

}