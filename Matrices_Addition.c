#include <stdio.h>

int main()
{
    int i,j;
    int array1[3][3],array2[3][3],array[3][3];

    printf("Enter the elements of the Matrix 1 : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }

    printf("Enter the elements of the Matrix 2 : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }

    printf("Sum Of two matrices : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d", array1[i][j] + array2[i][j]);
        }
        printf("\n");
    }
}