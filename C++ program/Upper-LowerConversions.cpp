#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    cout << "Enter the string : ";
    getline(cin,s1);
    int x;
    cout << "For lower to upper choose 1 and vice versa choose 2\n";
    cin >> x;
    if (x == 1)
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] >= 'a' || s1[i] <= 'z')
            {
                s1[i] -= 32;
            }
        }
    }
    else if (x == 2)
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] >= 'A' || s1[i] <= 'Z')
            {
                s1[i] += 32;
            }
        }
    }
    cout << s1 << endl;
}