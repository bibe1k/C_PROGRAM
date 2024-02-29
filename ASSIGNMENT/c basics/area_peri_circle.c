// program to compute perimeter and area of cicle//

#include<stdio.h>

int main() {

    // Declaring variables //
    float radius, perimeter, area,PI;

    //initializing variable//
       PI= 3.14;

       // Taking input for  variable radius//
    printf("Enter radius:");
    scanf("%f", &radius);

    area= 2*PI*radius*radius;
    perimeter= 2*PI*radius;

    // calculating perimeter of circle//
    printf("perimeter of circle is : %f\n",perimeter);

    /// calculating area of circle//
    printf("area of circle is : %f\n",area);

    return 0;

}