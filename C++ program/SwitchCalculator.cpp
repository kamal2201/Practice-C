#include <iostream>
using namespace std;
int main()
{
    int num1,num2,option;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division"<<endl;
    cout<<"Enter operand : ";
    cin>>option;
    switch (option)
    {
        case 1 : 
            cout<<"Sum is "<<num1+num2<<endl;
            break;
        case 2 :
            cout<<"Difference is "<<num1-num2<<endl;
            break;
        case 3 :
            cout<<"Product is "<<num1*num2<<endl;
            break;
        case 4 :
            cout<<"Quotient is "<<num1/num2<<" and remainder is "<<num1%num2<<endl;
            break;    
        default:
            cout<<"Enter a valid operation.";
            break;
    }   
    return 0;
}