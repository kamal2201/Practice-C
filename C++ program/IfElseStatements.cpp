#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of A : ";
    cin>>a;
    cout<<"Enter the value of B : ";
    cin>>b;
    cout<<"Enter the value of C : ";
    cin>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<"Maximum value is "<<a<<endl;
        }
        else
        {
            cout<<"Maximum Value is "<<c<<endl;
        }
    }
    else
    {
        if (b>a)
        {
            if (b>c)
            {
                cout<<"Maximum Value is "<<b<<endl;
            }
            else
            {
                cout<<"Maximum value is "<<c<<endl;
            }
        }
    }
    return 0;
}