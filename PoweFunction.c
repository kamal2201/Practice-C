#include <stdio.h>
int main()
{
    int i, result, power, base;
    printf("Enter the Base \n");
    scanf("%d", &base);
    printf("Enter the Power \n");
    scanf("%d", &power);
    result = base;
    for (i=1; i < power; i++)
    {
        printf (" base = %d, result = %d, %d, i = %d , power = %d \n", base, result, base * result, i, power);
        if ( i < power)
        {
            printf ("In this iteration i = %d < power = %d is TRUE \n", i, power);
        } 
        result = result * base;
        printf (" base * result = %d \n",  result);
    }
    return 0;
}