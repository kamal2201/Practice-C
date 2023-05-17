#include <iostream>
using namespace std

int main()
{
    int n,temp;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    bool swap = true;

    for (int i = 0; i < n-1; i++)
    {
        swap = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swap = true;
            }       
        }
        if (swap == false)
        {
            break;
        } 
    }
    printf("Sorted array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",array[i]);
    }
}