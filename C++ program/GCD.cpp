#include <iostream>
using namespace std;

int gcd(int x , int y)
{
    while(x!=y){
        if (x>y)
        {
            x = x - y;
        }
        else if (y > x)
        {
            y = y - x;
        }
    }
    return x;
}
int main()
{
    int a,b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << gcd(a,b) << endl;
}