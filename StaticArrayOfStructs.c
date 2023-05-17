#include <stdio.h>
#include <stdlib.h>

typedef struct StaticArrayOfStructs
{
    int x;
    int y;
}Point;

int main()
{
    Point pointsArray[5];
    int i;

    for (i=0;i<5;i++)
    {
        printf("Enter the value of 'X' for point %d: ",i+1);
        scanf("%d", &pointsArray[i].x);
        printf("Enter the value of 'Y' for point %d: ",i+1);
        scanf("%d", &pointsArray[i].y);
    }
    
    for (i=0;i<5;i++)
    {
        printf("Point %d = (%d,%d)\n", i+1,pointsArray[i].x,pointsArray[i].y);
    }
    
    return 0;
}