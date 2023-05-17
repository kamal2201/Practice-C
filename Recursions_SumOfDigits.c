#include <stdio.h>
int rsum(int);
int main()
{
    int num, sum;
    printf("Enter the number : \n");
    scanf("%d", &num);
    sum = rsum(num);
    printf("Sum of the digits : %d \n", sum);
    return 0;
}
int rsum(int num)
{
    int s, remainder;
    if(num!=0)
    {
        remainder = num%10;
        s = remainder + rsum(num/10);
    }
    else 
        return 0;
    return s;
}