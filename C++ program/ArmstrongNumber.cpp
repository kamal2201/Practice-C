#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,arm=0,rem,temp;
    cout<<"Enter the number : ";
    cin>>num;
    temp=num;
    while (num>0)
    {
        rem = num%10;
        arm = arm + pow(rem,3);
        num/=10;
    }
    if (arm == temp)
    {
        cout<<"It's an Armstrong number."<<endl;
    }
    else
        cout<<"It's not an Armstrong number."<<endl;
    return 0;
}