#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the days of the theme park : ";
    cin >> n;
    int array[n],mx;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    mx = array[0];
    int recbre = 0;
    for (int i = 0; i < 2; i++)
    {
        if (mx > array[i+1])
        {
            recbre++;
        }
        else if (mx < array[i+1])
        {
            mx = array[i+1];
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (array[i] > mx)
        {
            recbre++;
            mx = array[i];
        }
    }
    
    cout << "Number of record breaking days : " << recbre << endl;
    return 0;
}