#include <stdio.h>

int main()
{
    int age;

    printf("Enter the age of the person : \n");
    scanf("%d", &age);

    (age>18)?(printf("You are eligible to vote\n")):(printf("You are not eligible to vote\n"));
    return 0;
}