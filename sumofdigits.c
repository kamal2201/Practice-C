#include <stdio.h>
int main () 
{
    int num, result, rmd ;
    printf ("Enter Number -  ");
    scanf ("%d " , &num);
    result = 0;
    do
        {
            rmd = num%10;
            result = result + rmd;
            num = num/10;
        } while (num != 0);
    printf ("Sum of all digits - %d ->", result);
    return 0;
}