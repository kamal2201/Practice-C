#include <stdio.h>
#define SIZE 11
int main()
 
{
    int i,j;
    int mat[SIZE][SIZE];
    for(i=1;i<SIZE;i++)
    {
        for(j=1;j<SIZE;j++)
        {
            mat[i][j]=i*j;
        }
    }
    for(i=1;i<SIZE;i++)
    {
        for(j=1;j<SIZE;j++)
        {
            printf("%5d ", mat[i][j]); //use of %5d is to print 5 spaces whether necessary or not
        }printf("\n");
    }
    return 0;
}