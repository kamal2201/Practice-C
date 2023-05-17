#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the rows and columns of a square matrix : ";
    cin >> n;

    int array1[n][n],array2[n][n],array3[n][n];

    cout << "Input 1st matrix : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array1[i][j];
        }
    }

    cout << "Input 2nd matrix : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array2[i][j];
        }
    }
    int i = 0,j = 0,k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            array3[i][j]=0;
            for (k = 0; k < 3; k++)
            {
                array3[i][j] = array3[i][j] + (array1[i][k] * array2[k][j]);
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array3[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}