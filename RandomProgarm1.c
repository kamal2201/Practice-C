#include <stdio.h>

int main()

{
    int num,sum = 0,i;

    printf("Enter the number : \n");
    scanf("%d", &num);

    for (i = 1;i < num;i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    
    if (sum == num)
    {
        printf("It's a strong number\n");
    }
    else
    {
        printf("It's not a strong number\n");
    }
    
    return 0;
}