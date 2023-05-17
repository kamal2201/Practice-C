#include <iostream>
using namespace std;

int sum(int x)
{
    int result;
    result = (x*(x+1))/2;
    return result;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<sum(n)<<endl;
}