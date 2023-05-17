#include <stdio.h>
int sumnatural(int x);
int main()
{
    int num,sum;
    printf("Enter the number : \n");
    scanf("%d", &num);
    sum = sumnatural(num);
    printf("Sum of %d natural numbers : %d \n", num,sum);
    return 0;
}

int sumnatural(num)
{
    int result;
    result = num*(num+1)*0.5;
    return result;
}