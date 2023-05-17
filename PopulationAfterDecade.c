#include <stdio.h>
int main()
{
    int i,people,iop;

    printf("Enter the population : \n");
    scanf("%d", &people);

    for(i=1; i<=10; i++)
    {
        //printf("people --> %f \n", people);
        iop = people * 10/100;
        //printf("iop --> %f \n", iop);
        people = people + iop;
        //printf("people --> %f \n", people);
        printf("Population at the end of %d year(s) : %d \n",i,people);
    }
    return 0;
}