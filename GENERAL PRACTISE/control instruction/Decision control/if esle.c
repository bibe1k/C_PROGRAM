#include<stdio.h>

int main(){

    int age;

    printf(" Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are eligible for pompom\n");
        
    }

    else if (age >= 15 && age < 18)
    {
    printf("You are not eligible for pompom\n ");

    }
    

    else{
        printf("You are still teenager \n");
        
    }

    printf("Thank you");


    return 0;

}