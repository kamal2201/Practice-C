#include <stdio.h>

int main()
{
    int array[15];
    int n,i,j,temp;
    int small;

    printf("Enter the size of the array : \n");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for (i=0;i<n;i++)
    {
        small = array[i];
        for (j=i+1;j<n;j++)
        {
            if (array[j]<array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (i=0;i<n;i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}