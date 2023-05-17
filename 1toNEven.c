#include <stdio.h>
int main()
{
    int i=1,number;
    printf("Enter the number : \n");
    scanf("%d", &number);
    printf("The even numbers from 1 to %d are \n", number);
    while(i<=number)
    {
        if(i%2==0)
        {
            
            printf("%d \n", i);
        }
        i++;
    }
    return 0;
}