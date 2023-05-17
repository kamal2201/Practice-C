#include <stdio.h>
int main()
{
    int length, breadth, area, perimeter;
    printf("Enter the length of the rectangle : \n");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle : \n");
    scanf("%d", &breadth);
    area = length*breadth;
    printf("Area of the rectangle is %d \n", area);
    perimeter = 2*(length + breadth);
    printf("Perimeter of the reactangle is %d \n", perimeter);
    if(area>perimeter)
    {
        printf("Area is greater than the perimeter \n");
    }
    else 
    {
        printf("Perimeter is greater than the Area \n");
    }
    return 0;
}