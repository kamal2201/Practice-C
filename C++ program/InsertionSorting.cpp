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
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if(array[j] < array[j-1])
            {
                int temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
}