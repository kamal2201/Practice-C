#include <stdio.h>
void sort(int array[],int low,int high)
{
    if (low >= high) 
    {
        return;
    }
    int start = low;
    int end = high;
    int mid = (start + end)/2;
    int pivot = array[mid];
    while (start <= mid)
    {
        while (pivot > array[start])
        {
            start++;
        }
        while (pivot < array[end])
        {
            end--;
        }
        if (start <= end)
        {
            int temp = array[start];
            array[start] = array[end];
            array[end] = temp;
            start++;
            end--;
        }
    }
    sort(array,low,end);
    sort(array,start,high);
}

int main()
{
    int n;
    printf("Enter the range : ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    sort(array,0,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",array[i]);
    }
}