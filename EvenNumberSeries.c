#include <stdio.h>
int main()
{
    int i, num;
    printf ("Enter number \n");
    scanf ("%d", &num);
    printf ("Even numbers between 1 and %d \n", num);
    for (i=1;i<= num;i=i+1)
    {
       if (i%2 == 0)
       {
       printf ("%d \n" , i);
       }
    }   
    return 0;
}