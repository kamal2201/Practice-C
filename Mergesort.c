#include <stdio.h>
void merge(int array[],int start,int mid,int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = array[start + i]; 
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = array[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = start;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;
    }
    
    while (i < n1)
    {
        array[k] = left[i];
        i++;k++;
    }

    while (j < n2)
    {
        array[k] = right[j];
        j++;k++;
    }
}
void mergeSort(int array[],int start,int end)
{
    if (start < end)
    {
        int mid = (start + end)/2;
        mergeSort(array,start,mid);
        mergeSort(array,mid+1,end);
        merge(array,start,mid,end);
    }
    
}
int main()
{
    int n;
    printf("Enter the range : ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    mergeSort(array,0,n-1);
    printf("The elements after sorting are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}