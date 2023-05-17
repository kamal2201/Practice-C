#include <stdio.h>
#include <math.h>
int main()

{
    float l1,l2,g1,g2,D;
    printf("Enter the coordinates of latitudes : \n ");
    scanf("%f %f", &l1, &l2);
    printf("Enter the cooordinates of longitudes : \n ");
    scanf("%f %f", &g1, &g2);
    D = 3963 * acos (sin(l1)*sin(l2) + cos(l1)*cos(l2)*cos (g2-g1 ));
    printf("Distance : %f \n", D);
    return 0;
}