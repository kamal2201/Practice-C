#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cout << "Enter the value of X : ";
    cin >> x;
    cout << "Enter the value of N : ";
    cin >> n;
    int sum = 1 + x;
    for (int i = 2; i <= n; i++)
    {
        sum = sum + pow(x,i);
    }
    cout << "Expression Value : " << sum << endl;
}