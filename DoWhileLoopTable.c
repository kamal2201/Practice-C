#include <stdio.h>
int main()
{
    int num1, i;
    printf("Enter the number to generate multiplication table \n");
    scanf("%d", &num1);
    do
    {
       printf("%d * %d = %d \n", num1 , i, num1*i);
       i=i+1;
    } while (i<11);
    return 0;
}