#include <stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter the number : ");
    scanf("%d", &num);
    for(num=num; num>=1; num--)
    {
        fact=fact*num;
    }
    printf("The factorial of the number is %d \n", fact);
    return 0;
}