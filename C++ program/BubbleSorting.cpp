#include <iostream>
using namespace std;
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
    
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
    return 0;
}