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
    int counter,count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                counter = array[i];
                count++;
            }
        }
        if (count != 0)
        {
            break;
        }
    }

    cout << "First repeating number is " << counter << endl;
    return 0;
}