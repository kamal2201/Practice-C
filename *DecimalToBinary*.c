#include <stdio.h>

int main()
{
    int n,rem, i=0;
    int a[20];

    printf("Enter the number : ");
    scanf("%d", &n);
    while(n)
    {
        rem = n%2;
        n = n/2;
        a[i] = rem;
        i++;
    }
    
    for (int j = i-1; j >= 0; j--)
    {
        printf("%d",a[j]);
    }
    printf("\n");
    return 0;
}