#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    float r, phi;
    printf("Enter the coordinate values : \n");
    scanf("%d %d", &x, &y);

    r = sqrt(pow(x,2) + pow(y,2));
    phi = atan(y/x);

    printf("The polar coordinates are (%f,%f)", r, phi);
    return 0;
}