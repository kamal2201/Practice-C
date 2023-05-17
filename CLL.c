#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
}*first = NULL,*last = NULL;

void addatbeg(int ele)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = ele;
    if (first == last)
    {
        newnode->next = newnode;
        first = newnode;
    }
    else
    {
        newnode->next = first;
        first = newnode;
    }
    last->next = first;
}

void addatend(int ele)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = ele;
    last->next = newnode;
    newnode->next = first;
    last = newnode;
}

void addatpos(int ele, int pos)
{
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    temp = first;
    newnode->data = ele;
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void del(int ele)
{
    struct node *prev, *curr;
    curr = first;
    if (first == ele)
    {
        first = first->next;
        last->next = first;
    }
    else
    {
        while (curr->data == ele)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
    }
    free(curr);
}

void display(struct node *start)
{
    if (start == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        struct node *temp;
        temp = start;
        while(temp != NULL)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }
}