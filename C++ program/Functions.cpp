#include <iostream>
using namespace std;

int add(int x,int y)
{
    int sum;
    sum = x+y;
    return sum;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;
}