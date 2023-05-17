#include <stdio.h>

int main()
{
    int array[15];
    int n,i,j,temp;

    printf("Enter the size of the array : \n");
    scanf("%d", &n);

    for (i = 0;i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }        
    }
    
    for (i = 0;i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    
    return 0;
}