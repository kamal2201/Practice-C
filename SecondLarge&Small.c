#include <stdio.h>

int main()
{
    int array[100],i,n,s1,s2,l1,l2;

    printf("Enter the elements of the array : ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    l1 =  array[0];
    l2 =  array[0];
    for ( i = 0; i < n; i++)
    {
        if(array[i]>l1)
        {
            l2 = l1;
            l1 = array[i];
        }    
        if (array[i]>l2 && array[i]<l1)
        {
            l2 = array[i];
        }
    }
    printf("Second largest element : %d\n",l2);

    s1 =  array[0];
    s2 =  array[0];
    for ( i = 0; i < n; i++)
    {
        if(array[i]<s1)
        {
            s2 = s1;
            s1 = array[i];
        }    
        if (array[i]<s2 && array[i]>s1)
        {
            s2 = array[i];
        }
    }
    printf("Second smallest element : %d\n",s2);
    return 0;
}