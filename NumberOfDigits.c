#include <stdio.h>
int main()
{
    int i=0,num;
    printf("Enter the number : ");
    scanf("%d", &num);
    do
    {
        i++;
        num = num/10;
    } while(num!=0);
    printf("Number of digits = %d \n", i);
    return 0;
}
