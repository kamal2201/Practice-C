#include <stdio.h>
int main()
{
    int i;
    char name[20];
    printf("Enter your name. \n");
    scanf("%s", name);

    for (i=1;i<=10;i=i+1)
    {
        printf("%d %s \n",i, name);
    }
return 0;
}