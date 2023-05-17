#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100];
    int i,n;
    int value,count,position;

    printf("Enter the size of the array : ");
    scanf("%d \n", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the value : ");
    scanf("%d", &value);

    for(i=0;i<n;i++)
    {
        if(array[i]==value)
        {
            count++;
            position = i+1;
        }
    }
    printf("The value %d is present in the position %d. \n", value, position);
}