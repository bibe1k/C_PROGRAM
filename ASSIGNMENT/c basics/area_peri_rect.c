// program to compute perimeter and area of rectangle
#include<stdio.h>

int main() {

    //Declaring varibale in inch//
    int height , width, perimeter, area;

    //Initializing variable in inch//
    height=7;
    width=5;

    // calculating perimeter //
     perimeter= 2*(height+width);
     printf("perimeter of rectangle is %d\n",perimeter);

    // calculating Area//
     area= width*height;
     printf("area of rectangle is %d\n",area);

     return 0;
}
