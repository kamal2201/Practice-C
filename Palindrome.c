#include <stdio.h>
int main()
{
    int num,revnum,digit,temp;
    printf("Enter the number : \n");
    scanf("%d", &num);
    temp = num;
    do
    {   
        digit = (num % 10);
        num = num/10;
        revnum = (revnum * 10) + digit;
    }while (num!=0);
    if(temp == revnum)
    {
        printf("The number is a palindrome \n");
    }
    else 
    {
        printf("The number is not a palindrome \n");
    }
    return 0;
}