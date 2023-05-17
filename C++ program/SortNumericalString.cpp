#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin , str);
    sort(str.begin(),str.end(),greater<int>());
    cout << str << endl;
}