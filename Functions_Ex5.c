#include <stdio.h>
int leapyear(int x);
int main()
{
    int year;
    printf("Enter the year : \n");
    scanf("%d", &year);
    leapyear(year);
    return 0;
}

int leapyear(year)
{
    int leapyear;
    if(year%4 == 0)
    {
        printf("It is a leap year \n");
    }
    else
    {
        printf("It is not a leap year \n");
    }
    return leapyear;
}