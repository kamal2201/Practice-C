#include <iostream>
using namespace std;

int b[100];

void merge(int array[],int lb,int mid,int ub)
{
    int n = ub;
    int i = lb;
    int j = mid + 1;
    int k = lb;
    while (i <= mid && j <= ub)
    {
        if (array[i] <= array[j])
        {
            b[k] = array[i];
            i++;k++;
        }
        else
        {
            b[k] = array[j];
            j++;k++;
        }
    }
    if (i>mid)
    {
        while (j <= ub)
        {
            b[k] = array[j];
            j++;k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = array[i];
            i++;k++;
        }    
    }
    for (int i = lb; i <= ub; i++)
    {
        array[i] = b[i];
    }
}

void mergesort(int array[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub)/2;
        mergesort(array, lb, mid);
        mergesort(array, mid + 1, ub);
        merge(array,lb,mid,ub);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int array[n];
    cout << "Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    int lowerboundary = 0;
    int upperboundary = n-1;

    mergesort(array,lowerboundary,upperboundary);

    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }cout << endl;
    
}