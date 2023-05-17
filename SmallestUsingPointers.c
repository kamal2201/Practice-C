#include <stdio.h>

int main()

{
    int array[25],n,i;
    int *smallest;

    printf("Enter the size of the array : \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    smallest = &array[0];

    for (i = 1; i < n; i++)
    {
        if (*(array+i) < *smallest)
        {
            *smallest = *(array + i);
        }
    }
    
    printf("Smallest number in the array is %d\n", *smallest);
    return 0;
}