// program to calulates the product of integers given by users//
#include<stdio.h>

   int main() {
      
    // Declaring variables//
    int x, y, product;

    // Taking input from users//
    printf("Enters two integers: ");
    scanf("%d %d",&x, &y);

    // Calculating product//
    product=x*y;
    printf("Product is: %d\n",product);

    return 0;
   }
