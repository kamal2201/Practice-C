#include <stdio.h>
float recarea(float x, float y)
{
    float area;
    area = x * y;
    return area;
}
int main()
{
    float a,b,area;
    printf("Enter the length of the rectangle : \n");
    scanf("%f", &a);
    printf("Enter the breadth of the rectangle : \n");
    scanf("%f", &b);

    area = recarea(a,b);
    printf("Area of the rectangle : %f \n", area);
    return 0;
}