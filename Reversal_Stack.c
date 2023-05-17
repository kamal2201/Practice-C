#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int stack[SIZE];
int top = -1;

void push(int ele)
{
    if (top == SIZE -1)
    {
        printf("Stack overflow");
    }
    else
    {
        top++;
        stack[top] = ele;
    }
}

int pop()
{
    int x = -1;
    if (top == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        x = stack[top];
        top--;
    }
    return x;
}

int main()
{
    int n;
    printf("Enter the range : ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
        push(array[i]);
    }
    printf("ELements in reverse order : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t",pop());
    }
}