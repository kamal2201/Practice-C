#include <stdio.h>
int main()

{
    int pos,neg,zero,num;
    int i,number,choice=1;
    pos = 0; neg = 0; zero = 0;
        do
        {
            printf("Would you like to enter a number : \n");
            scanf("%d", &choice);
            if(choice==1)
            {
                printf("Enter the number : \n");
                scanf("%d", &number);
                if(number>0)
                pos++;
                if(number<0)
                neg++;
                if(number==0)
                zero++;
            }
        }while(choice != 0);
        printf("Number of positive numbers : %d\n", pos);
        printf("Number of negative numbers : %d\n", neg);
        printf("Number of zeroes : %d\n", zero);

    return 0;    
}