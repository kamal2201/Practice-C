#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character(case sensitive) : ";
    cin>>c;
    switch (c)
    {
    case 'a':
        cout<<"It's a vowel"<<endl;
        break;
    case 'e':
        cout<<"It's a vowel"<<endl;
        break;
    case 'i':
        cout<<"It's a vowel"<<endl;
        break;
    case 'o':
        cout<<"It's a vowel"<<endl;
        break;
    case 'u':
        cout<<"It's a vowel"<<endl;
        break;
    default:
        cout<<"It's a consonent"<<endl;
        break;
    }
}