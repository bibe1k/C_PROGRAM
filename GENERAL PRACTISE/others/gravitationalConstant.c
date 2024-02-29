#include <stdio.h>
#include<math.h>

int main() {

    const double G =6.67 * (pow(10,-11));
    double m1,m2,Dis,force;
    printf("enter mass 1:");
    scanf("%lf", &m1);

    printf("enter mass 2:");
    scanf("%lf", &m2);

    printf("enter distance between them:");
    scanf("%lf",&Dis);

    force = (G*m1*m2)/(Dis*Dis);
    printf("%lf", force);
    return 0;
}