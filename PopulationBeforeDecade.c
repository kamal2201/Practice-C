#include <stdio.h>
int main()

{
    int i,people,dip;

    printf("Enter the population : \n");
    scanf("%d", &people);

    for(i=1;i<=10;i++)
    {
        dip = people * 10 /100;
        people = people - dip;
        printf("Popution before %d year(s) : %d \n", i, people);
    }
    return 0;
}