#include <iostream>
using namespace std;
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
    
    int minindex = 0;int temp;
    for (int i = 0; i < n; i++)
    {
        minindex = i;
        for (int j = i+1; j < n; j++)
        {
            if (array[j]<array[minindex])
            {
                minindex = j;
            }
        }
        temp =array[minindex];
        array[minindex] = array[i];
        array[i] = temp;
    }
    
    cout << "Sorted List : ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }cout << endl;
    return 0;
}