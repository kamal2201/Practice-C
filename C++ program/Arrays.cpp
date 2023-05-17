#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int array[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int min = array[0],max = array[0];
    for (int i = 0; i < n; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
        if (max < array[i])
        {
            max = array[i];
        }
    }
    cout << "Maximum value is " << max << " Minimum value is " << min << endl;
    return 0;
}