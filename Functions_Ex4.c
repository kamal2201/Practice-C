#include <stdio.h>

void maxdigit(int num)
{
    if (num>99 || num<10)
        {
        printf("The number you have entered is not a 2-digits number. \n");
        }
    else
        {
            if(num%10 > num/10)
            {
                printf("The maximum digit in %d is %d. \n",num, num%10);
            }
            else
            {
                printf("The maximum digit in %d is %d. \n",num, num/10);
            }
        }
}

int main()
{
    int num;
    printf("Enter the number : \n");
    scanf("%d", &num);
    maxdigit(num);
    return 0;
}