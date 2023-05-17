#include <iostream>
using namespace std;
int main()
{
    int n;
    int fp = 0,lp = 0;
    cout << "Enter the size of the array : ";
    cin >> n;
    int array[n],sum;
    int givenSum;
    cout << "Enter the given sum : ";
    cin >> givenSum;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += array[j];
            if (sum == givenSum)
            {
                fp = array[i];
                lp = array[j];
            }
        }
    }
    cout << "First point : " << fp << " Last point : " << lp << endl; 
}