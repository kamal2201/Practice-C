#include <iostream>
using namespace std;
int main()
{
    for (int date = 1; date <= 30; date++)
    {
        if(date%2==0)
        {
            continue;   // Continue statements skip the iteration.
        }
        if (date==7)
        {
            break;  // Break statements terminates the loop.
        }
        cout<<"You can go out on "<<date<<endl;
    }
}