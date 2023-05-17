#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int array[n];
    int ans,pd,curr=2;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    pd = array[1] - array[0];

    int j = 2;
    while (j<n)
    {
        if (pd == array[j] - array[j-1])
        {
            curr++;
        }
        else
        {
            pd = array[j] - array[j -1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout << "Longest Arithematic Subarray : " << ans << endl;
    return 0;
}