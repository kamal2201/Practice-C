#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) 
{
    while (low <= high) 
    {
    int mid = (high + low) / 2;

    if (array[mid] == x)
        return mid;

    if (array[mid] < x)
        low = mid + 1;

    else
        high = mid - 1;
    }

    return -1;
}

int main()
{
    int n;
    cout << "Enter size of the array : ";
    cin >> n;
    int array[n];
    int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    for (int j = 0; j < n; j++)
    {
        for (int i = 1; i < n; i++)
        {
            if (array[i]<array[i-1])
            {
                temp = array[i-1];
                array[i-1] = array[i];
                array[i] = temp;
            }
        }
    }
    int x;
    cout << "Enter the element you want to search : ";
    cin >> x;
    int result = binarySearch(array,x,0,n);
    if (result == -1)
        cout << "Not found" << endl;
    else
        cout << "Element is found at " << result+1 << endl;

}