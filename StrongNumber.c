#include <stdio.h>
int main()
{
    int num,originalnum,ldfact,sum,i,result,lastdigit;
    printf("Enter the number : \n");
    scanf("%d", &num);
    originalnum = num;
    
    do
    {
        ldfact=1;
        lastdigit = num%10;
        for(i=1; i<=lastdigit; i++)
        {
            ldfact = ldfact * i;
        }
        num = num/10;
        sum = sum + ldfact;
    }while(num!=0);
    if(sum == originalnum)
    {
        printf("It is a strong number \n");
    }
    else 
    {
        printf("it is not a strong number \n");
    }
    return 0;
}