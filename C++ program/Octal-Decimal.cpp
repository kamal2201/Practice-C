#include <iostream>
#include <cmath>
using namespace std;

int bintodec(int n)
{
    int rem;
    int ans = 0,i = 0;
    while(n > 0)
    {
        rem = n % 10;
        ans = ans + rem * pow(8,i);
        n /= 10;
        i += 1;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the Octal number : ";
    cin >> n;
    cout << "Decimal Number : " << bintodec(n) << endl;
}