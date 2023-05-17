#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double mean = 0,var = 0,sd = 0;
    double result;
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    double array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        mean = mean + array[i];
    }
    mean = mean/n;
    cout << "Mean : " << mean << endl;

    for (int i = 0; i < n; i++)
    {
        array[i] = array[i] - mean;
        array[i] = pow(array[i],2);
        result = result + array[i];
    }
    var = result/n;
    cout << "Variance : " << var << endl;

    sd = sqrt(var);
    cout << "Standard Deviation : " << sd << endl;

    return 0;
}