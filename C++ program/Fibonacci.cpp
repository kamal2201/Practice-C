#include <iostream>
using namespace std;

void fibo(int x)
{
    int a=0,b=1,newterm;
    for (int i = 0; i < x; i++)
    {
        newterm = a + b;
        cout<<b<<"\t";
        a = b;
        b = newterm;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;
    fibo(n);
}