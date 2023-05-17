#include <stdio.h> 
#include <stdlib.h> 

struct node
{
    int data;
    struct node *next; 
};
struct node *first = NULL;

void addatbegin (int);
void addatpos (int, int);
void addatend (int);
void del (int);
void display ();

void main () 
{
    int choice, ele, pos;
    printf ("\n*******Menu*******");
    printf ("\n1. Add @ Begin");
    printf ("\n2. Add at position");
    printf ("\n3. Add @ End");
    printf ("\n4. Delete");
    printf ("\n5. Display");
    printf ("\n6. Exit");
    while (1)
    {
        printf ("\n\nEnter Ur Choice: ");
        scanf ("%d", &choice);
        switch (choice)
        {
            case 1: /* Adding at the begining */
                printf ("\nEnter an element to add: ");
                scanf ("%d", &ele);
                addatbegin (ele);
                break;
            case 2: /* Adding after number of positions */
                printf ("\nEnter an element to add: ");
                scanf ("%d", &ele);
                printf("\nEnter the position number: "); 
                scanf ("%d", &pos);
                addatpos (ele, pos);
                break;
            case 3: /* Adding at the end */
                if (first == NULL)
                {
                    printf ("\nEnter an element to add: ");
                    scanf ("%d", &ele);
                    addatbegin (ele);
                    break;
                }
                printf ("\nEnter an element to add: ");
                scanf ("%d", &ele);
                addatend (ele);
                break;
            case 4: /* Deleting and element */
                if (first == NULL)
                {
                    printf ("\nList is Empty\n"); break;
                }
                printf ("\nEnter an element to delete: ");
                scanf ("%d", &ele);
                del (ele);
                break;
            case 5: /* Display the elements */
                if (first == NULL)
                printf("\nList is empty\n"); 
                else
                {
                    printf ("The elements in the List are: "); display();
                }
                break;
            case 6: /* Exit */
                return;
            default:
                printf ("Invalid Choice");
        }
    }
}

void addatbegin (int ele)
{
    struct node *n;
    n = (struct node*) malloc(sizeof(struct node));
    n->data = ele;
    if (first == NULL)
        n->next = NULL; 
    else
        n->next = first;
        first = n;
}

void addatpos (int ele, int pos) 
{
    int i;
    struct node *n, *temp;
    n = (struct node*)malloc(sizeof(struct node));
    n->data = ele;
    temp = first;
    for (i=1; i<pos-1; i++)
    {
        if(temp == NULL) {
        printf("\nInvalid Position\n");
        return; 
        }
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}

void addatend (int ele) 
{
    struct node *n, *temp;
    n = (struct node*) malloc(sizeof(struct node));
    n->data = ele;
    n->next = NULL;
    temp = first;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = n;
}

void del (int ele)
{
    struct node *curr, *prev; curr = first;
    if (first->data == ele)
        first = first->next; 
    else
    {
        while (curr->data != ele)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
    }
    free (curr);
}

void display ()
{
    struct node *temp;
    temp = first;
    while (temp != NULL) 
    {
        printf ("%d ", temp -> data);
        temp = temp -> next;   
    }
}