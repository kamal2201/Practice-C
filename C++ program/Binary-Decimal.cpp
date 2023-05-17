#include <iostream>
using namespace std;

int bindec(int n)
{
    int ans = 0;
    int rem,x;
    while (n > 0)
    {
        rem = n % 2;
        ans = ans * 10 + rem;
        n = n/2;
    }
    rem = 0; 
    int result = 0;
    while (ans > 0)
    {
        rem = ans % 10;
        result = result*10 + rem;
        ans /= 10;
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter the Binary number : ";
    cin >> n;
    cout << "Decimal number : " << bindec(n) << endl;
    return 0;
}