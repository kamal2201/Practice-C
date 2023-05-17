#include <stdio.h>
int main()
{
    int num1, i;
    printf("Enter the number to generate multiplication table ");
    scanf("%d", &num1);
    for (i=1;i<=10;i++)
    {
        printf("%d * %d = %d \n", num1 , i, num1*i);
    }
    return 0;
}