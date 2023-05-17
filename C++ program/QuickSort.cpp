#include <iostream>
using namespace std;

int partition(int array[],int lb,int ub)
{
    int pivot = array[lb];
    int start = lb;
    int end = ub;
    int temp;

    while (start < end)
    {
        while (array[start] <= pivot)
        {
            start++;
        }
        while (array[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            temp = array[start];
            array[start] = array[end];
            array[end] = temp;
        }
    }
    temp = array[lb];
    array[lb] = array[end];
    array[end] = temp;

    return end;
}

void quicksort(int array[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(array,lb,ub);
        quicksort(array,lb,loc-1);
        quicksort(array,loc+1,ub);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    partition(array,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }cout << endl;
    
}