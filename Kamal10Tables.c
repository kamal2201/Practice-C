#include <stdio.h>
int main()
{
    int i, j;
    
    for (j=2; j<=10; j++)
    {
        printf("Table - j -> %d \n", j);
        printf("********** \n");
        for (i=1;i<=10;i++)
        {
            printf(" j -> %d * i -> %d = j * i -> %d \n", j, i, j*i);
        }
        printf(" came out of inner for loop i\n");
    }
    printf("came out of outer for loop j \n");
    return 0;
}