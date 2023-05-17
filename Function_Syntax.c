#include <stdio.h>
void morning(),afternoon(),night();
int main()
{
    morning();
    afternoon();
    night();
    return 0;
}

void morning()
{
    printf("Good mmorning \n");
}
void afternoon()
{
    printf("Good Afternoon \n");
}
void night()
{
    printf("Good Night \n");
}