#include <stdio.h>
#include <math.h>
int main()
{
    int num,originalnum,digit,sum,i,result = 1;

    printf("Enter the number : \n");
    scanf("%d", &num);
    originalnum = num;

    do
    {
        digit = num % 10;
        num = num/10;
        sum = sum + pow(digit,3);
        
    }while (num != 0);

    if(originalnum == sum)
    {
        printf("It is a ARMSTRONG number \n");
    }
    else
    {
        printf("It is not a armstrong number \n");
    }
    return 0;

}