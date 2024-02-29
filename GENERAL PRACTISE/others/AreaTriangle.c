#include <stdio.h>

int main() {
    // Declare variables
    int base, height;
    int area;

    // Assign values to base and height
   printf("enter base:");
   scanf("%d", &base);

   printf("enter height: ");
   scanf("%d", &height);
    // Calculate the area of the triangle
    area = (base * height) / 2;

    // Display the result
    printf("The Area of tirangle is %d",area);
    return 0;
}