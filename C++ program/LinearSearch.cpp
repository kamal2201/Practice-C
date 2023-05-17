#include <iostream>
using namespace std;
int main()
{
    int n;
    int number,check;
    cout << "Enter the size of the array : ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the number you want to search : ";
    cin >> number;
    for (int i = 0; i < n; i++)
    {
        if (number == array[i])
        {
            check = i;
        }
    }
    cout << "Number is found at " << check << endl;
    return 0;
}