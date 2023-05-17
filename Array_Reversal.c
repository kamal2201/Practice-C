#include <stdio.h>

int main()
{
    int array[100],n,i,j,temp;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    
    printf("Array reversal :");
    for (i=0;i<n;i++)
    {
        printf("%3d",array[i]);
    }printf("\n");
    return 0;
}