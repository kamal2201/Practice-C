#include <stdio.h>
int ar(int x);

int main()
{
    int a,area,side;
    printf("Enter the side of the square : \n");
    scanf("%d", &side);
    area = ar(side);
    printf("Area --> %d \n", area);
    return 0;
}

int ar(int x)
{
    int b;
    b = x * x;
    return b;
}