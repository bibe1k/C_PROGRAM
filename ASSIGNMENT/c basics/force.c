#include<stdio.h>
#include<math.h>

int main() {

    //Declaring variables//
    const float G = 6.67e-11; // G is universal gravitational constant 
    float mass1, mass2, distance, force; // mass in kg and distance in meter//
    
    // Taking input from users //
    printf("Enter the mass1 and mass2 respectively: ");
    scanf("%f %f", &mass1, &mass2); 

    printf("Enter the distance between two bodies: ");
    scanf("%f", &distance);

    // Calculating the force of attraction between two bodies//
    force = (G * mass1 * mass2) / (distance * distance);

    printf("The force of attraction between two bodies is %e Newtons\n", force);
    return 0;
}
