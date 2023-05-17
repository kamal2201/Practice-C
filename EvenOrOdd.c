#include <stdio.h>
int main()
{
    int number1;
    printf("Test to find the number whether it is even or odd \n");
    printf("Enter the number \n");
    scanf("%d", &number1);

    if (number1%2==0)
    {
        printf("The number %d is even.",number1);
    }
    else
    {
        printf("The number %d is odd.",number1);
    }
    return 0;



}