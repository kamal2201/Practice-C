#include <iostream>
using namespace std;
int main()
{
    long long int num,fact=1;
    cout<<"Enter the number : ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        fact = fact*i;
    }
    cout<<"Factorial = "<<fact<<endl;
    return 0;
}
// Range = 1 - 25