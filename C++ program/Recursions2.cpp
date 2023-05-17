#include<iostream>
using namespace std;

int power(int n, int p)
{
    int prevPower;
    if (p == 0)
    {
        return 1;
    }
    
    prevPower = power(n,p-1);
    return n*prevPower;
}

int main()
{
    int n,p;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter the power of the number : ";
    cin >> p;
    cout << power(n,p) << endl;
}