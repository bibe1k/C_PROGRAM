#include<stdio.h>

// To check whether the given number is even or not



int main(){
    int a;
    
    printf("Enter a number: \n ");
    scanf(" %d", &a);
    
    if (a % 2 == 0 ){

    printf(" Given number is Even ", a);

    }

    else{

    printf("Given number is Odd. ", a);

    }
    return 0;
}
