#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int array[6],i;
    float a,b;
    float angle,area;
    float greatest_area;

    for(i=0;i<6;i++)
    {
        printf("Triangle %d\n",i+1);
        printf("Enter the side of A : \n");
        scanf("%f",&a);
        printf("Enter the side of B : \n");
        scanf("%f",&b);
        printf("Enter the angle of the triangle : \n");
        scanf("%f",&angle);
        area = 0.5*a*b*sin(angle);
        printf("AREA --> %f\n", area);
        array[i] = area;
    }    

    greatest_area = array[0];

    for(i=1;i<6;i++)
    {
        if(array[i]>greatest_area)
            greatest_area = array[i];
    }

    printf("Triangle with greatest area is %d with area %f\n",i,greatest_area);
    return 0;
}