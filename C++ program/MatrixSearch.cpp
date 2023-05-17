#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout << "Enter the rows of the matrix : ";
    cin >> n;
    cout << "Enter the columns of the matrix : ";
    cin >> m;

    int array[n][m];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
    
    int key;
    bool flag;
    cout << "Enter the element you want to search : ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (key == array[i][j])
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "Element found" << endl;
    }
    else
        cout << "Element not found" << endl;
    return 0;
}