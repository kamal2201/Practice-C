#include <stdio.h>

int fact(int x)
{
    int i,factorial = 1;
    for (i=1;i<=x;i++)
    {
        factorial = factorial * i;
    }
    return(factorial);
}

int main()
{
    int n,r,nfact, nmrfact, npr;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    nfact = fact(n);
    printf("Enter the value of r : ");
    scanf("%d",&r);
    nmrfact = n - r;
    nmrfact = fact(nmrfact);
    npr = nfact / nmrfact;
    printf("%d\n",npr);
    return 0;
}