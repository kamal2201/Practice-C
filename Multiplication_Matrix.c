#include <stdio.h>
#include <math.h>

int main()
{
    int array1[3][3],array2[3][3],array3[3][3];
    int i,j,k;

    printf("Enter the elements of 1st matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the elements of 2nd matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }

    printf("Enter the elements of 1st matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3d", array1[i][j]);
        }printf("\n");
    }

    printf("Enter the elements of 2nd matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3d", array2[i][j]);
        }printf("\n");
    }

    printf("Multiplying Matrix 1 and Matrix 2 \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            array3[i][j]=0;
            for (k = 0; k < 3; k++)
            {
                array3[i][j] = array3[i][j] + (array1[i][k] * array2[k][j]);
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3d", array3[i][j]);
        }printf("\n");
    }
    return 0;
}