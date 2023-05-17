#include <iostream>
using namespace std;

int perfect(int x)
{
    int perfectSum = 0;
    for (int i = 1; i < x; i++)
    {
        if (x%i==0)
        {
            perfectSum+=i;
        } 
    }
    return perfectSum;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if (n == perfect(n))
    {
        cout<<"It is a perfect number"<<endl;
    }
    else
        cout<<"It is not a perfect number"<<endl;
    return 0;
}