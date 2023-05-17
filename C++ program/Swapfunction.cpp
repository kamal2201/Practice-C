#include <iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"The first number is "<<a<<endl;
    cout<<"The second number is "<<b<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    swap(a,b);

    return 0;
}                             