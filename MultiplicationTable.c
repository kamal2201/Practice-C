#include <stdio.h>
int main()
{
    int i, num;
    printf ("Enter number \n");
    scanf ("%d", &num);
    for (i=1;i<= 5;i=i+1)
    {
       //printf ("%d \n", i);
       printf (" %d * %d = %d \n" , num, i, num*i);
    }
    return 0;
}