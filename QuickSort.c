#include <stdio.h>
void quicksort(int array[], int first, int last)
{
    int pivot = first;
    int i,j,temp;
    if(first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (array[i] <= array[pivot] && i < last)
            {
                i++;
            }
            while (array[j] > array[pivot])
            {
                j--;
            }
            if (i<j)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }   
        }
        temp = array[pivot];
        array[pivot] = array[j];
        array[j] = temp;
        quicksort(array,first,j-1);
        quicksort(array,j+1,last);
    }
}

int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements - ");
    for(int i = 0;i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    quicksort(array,0,n-1);
    printf("Sorted array : ");
    for(int i = 0;i < n; i++)
    {
        
        if (i == n-1)
        {
            printf("%d\n",array[i]);
            return 0;
        }
        else
            printf("%d\t",array[i]);
    }   
}