#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin,str);
    cout << "String you entered : ";
    cout << str << endl;
    cout << "Reversed String : ";
    reverse(str.begin(),str.end());
    cout << str << endl;
}