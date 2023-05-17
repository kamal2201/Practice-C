#include <iostream>
using namespace std;

void taxCalculator(int n)
{
    int tax;
    if (n<100000)
    {
        tax = 0;
        n = n - tax;
    }
    if (n>100000 && n<200000)
    {
        tax = 0.10*n;
        n = n - tax;
    }
    if (n>200000 && n<500000)
    {
        tax= 0.20*n;
        n = n - tax;
    }
    if (n>500000)
    {
        tax= 0.30*n;
        n = n - tax;
    }
    cout<<"Savings = "<<n<<" and Tax Paid = "<<tax<<endl;
}

int main()
{
    int amount;
    cout<<"Enter the amount  : ";
    cin>>amount;
    taxCalculator(amount);
}