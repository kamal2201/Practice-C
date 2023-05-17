#include <stdio.h>

int main()
{
    int i, n, sum;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum += i;
    }
    printf("Sum of first %d natural numbers = %d \n", n, sum);
    return 0;
}