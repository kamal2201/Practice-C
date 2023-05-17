#include <stdio.h>
int main()
{
    int i,num,cntr;
    printf("Enter the number \n");
    scanf("%d", &num);
    if (num == 1)
    { 
        printf (" 1 id neither prime nor composite \n");
        return 0;
    }
    for (i=1;i<=num; i++)
    {
        printf ("%d \n'",i);
        if (num % i == 0)
        {
            printf ("num mod i -> %d \n", num%i);
            printf ("cntr -> %d \n", cntr);
            cntr++;
            printf ("cntr after increment -> %d \n", cntr);
        }
    }
    if (cntr > 2)
    {
        printf ("Given number is not prime \n");
    }
    else
    {
        printf ("Given number is prime \n");
    }
    return 0;
}