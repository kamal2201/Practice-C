#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
    int x;
    int y;
}Point;

int main()
{
    // Declaring a "Point" variable (without initializtaion)
    Point p1;

    // Initializing a "Point" variable (members in order)
    Point p2 = {5,7};

    // Using Designated Initializer 
    Point p3 = {.x = 3, .y = 4};

    // Using Designated Initializer (out of order)
    Point p4 = {.y = 10, .x = 2};

    // Designated initializer (other members are initialized with 0)
    Point p5 = {.x = 1};

    // Printing Values 
    printf("P1 = (%d,%d)\n",p1.x,p1.y);
    printf("P2 = (%d,%d)\n",p2.x,p2.y);
    printf("P3 = (%d,%d)\n",p3.x,p3.y);
    printf("P4 = (%d,%d)\n",p4.x,p4.y);
    printf("P5 = (%d,%d)\n",p5.x,p5.y);

    return 0;
}