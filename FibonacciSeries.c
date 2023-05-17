#include <stdio.h>

int main()

{
    int a=1,b=2,c;
    int i,n;

    printf("Enter the range the series : ");
    scanf("%d", &n);
    printf("\n");
    printf("%3d%3d",a,b);

    for (i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%3d", c);
        a = b;
        b = c;
    }
    return 0;
}