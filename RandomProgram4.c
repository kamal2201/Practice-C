#include <stdio.h>

int main()

{
    int sum1=0,sum2=0,sum3=0,sumt=0,z=0;
    sum1 = 1234;
    sum2 = 1234;
    sum3 = 1234;
    sumt = 1342;
    if ((sum1 + sum2 + sum3)/sumt >= 0)
    {
        z = 1;
    }
     if ((sum1 + sum2 + sum3)/sumt <= 1)
    {
        z = -1;
    }
    printf("%d",z);
    return 0;
}