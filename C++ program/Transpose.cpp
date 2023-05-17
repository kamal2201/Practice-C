#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout << "Enter the rows of the matrix : ";
    cin >> n;
    cout << "Enter the columns of the matrix : ";
    cin >> m;

    int array[n][m],temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << "\t";
        }cout << "\n";
    }
}