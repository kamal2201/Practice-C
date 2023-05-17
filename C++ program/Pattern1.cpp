#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        for ( j = i; j <= n; j++)
        {
            cout<<" ";
        }
        for (j = i; j <= 2*i-1; j++)
        {
            cout<<"* ";
        }cout<<endl;
    }
    return 0;
}