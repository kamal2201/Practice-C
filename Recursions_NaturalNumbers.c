#include <stdio.h>
int sumnatural(int x);
int main()
{
    int num;
    printf("Enter the number : \n");
    scanf("%d", &num);
    printf("Sum = %d \n", sumnatural(num));
    return 0;
}

int sumnatural(num)
{
    if(num!=0)
        return num + sumnatural(num-1);
    else
        return 0;
}   