#include <stdio.h>
#include <math.h>
int main()
{
    int num,d1,d2,d3,d4,d5,revnum;
    printf("Enter the number : \n");
    scanf("%d", &num);
    d1=num%10;
    d2=(num/10)%10;
    d3=(num/100)%10;
    d4=(num/1000)%10;
    d5=(num/10000);
    revnum = d1*10000 + d2*1000 + d3*100 + d4*10 + d5;
    printf("The reversed number of %d is %d \n", num, revnum);

    if (num==revnum)
    {
        printf("They are SAME!!! \n");
        return 0;
    }
    else
    {
        printf("They are NOT SAME!!! \n");
        return 0;
    }
}