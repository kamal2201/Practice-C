#include <stdio.h>
float average(int x, int y, int z);
int main()
{
    int a,b,c;
    printf("Enter the first number : \n");
    scanf("%d",&a);
    printf("Enter the second number : \n");
    scanf("%d",&b);
    printf("Enter the third number : \n");
    scanf("%d",&c);
    printf("Average of three numbers is %f \n", average(a,b,c));
    return 0;
}

float average(a,b,c)
{
    float result;
    result = (a+b+c)/3;
    return result;
}
