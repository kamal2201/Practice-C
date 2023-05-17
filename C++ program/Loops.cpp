#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum = 0;
    for (int i = 1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of first "<<n<<" numbers is "<<sum<<endl;
    cout<<"Multiplication Table of "<<n<<endl;
    for (int i=1;i<=10;i++)
    {
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}