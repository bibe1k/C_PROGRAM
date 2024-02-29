//Use a while loop to print even numbers up to 20.

#include<stdio.h>

int main()
{
    printf("Even numbers are: \n");
    int num=1;
    while (num<= 20)
    {
        if( num%2 == 0){
        printf("%d \n", num);
    }
        num++; 
}

    return 0;
}