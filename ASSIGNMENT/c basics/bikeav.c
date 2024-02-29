/*Program to calculate a bike's average consumption from the given total distance(integer value in km) 
  and spent fuel (in liters,float number 2 decimal point) */

  #include<stdio.h>

  int main() {
     
    // Declaring variables //
    int distance;
    float average, fuelused;
     
    // Taking Inputs //
    printf("Enter the total distance:");//In KM//
    scanf("%d",&distance);

    printf("Enter the total fuel used:");//In liters//
    scanf("%f",&fuelused);

    //Calculating the bike's average consumption//
    average=distance/fuelused;

    printf("The average consumption is %.2f\n",average);

    return 0;
  }
