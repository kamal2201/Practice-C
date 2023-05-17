#include <stdio.h>
int main()
{
    int amount, nohun, nofif, noten, nofive, notwo, noone, total;
    printf("Enter the amount : \n");
    scanf("%d", &amount);
    nohun=amount/100;
    amount=amount%100;
    nofif=amount/50;
    amount=amount%50;
    noten=amount/10;
    amount=amount%10;
    nofive=amount/5;
    amount=amount%5;
    notwo=amount/2;
    amount=amount%2;
    noone=amount/1;
    total=nohun+nofif+noten+nofive+notwo+noone;
    printf("No. of notes = %d \n", total);

    return 0;

}