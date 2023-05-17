#include <stdio.h>
#define SIZE 10
int queue[SIZE];
int front = -1;
int rear = -1;
void enQueue(int x) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow");
    }
    else {
        rear++;
        queue[rear] = x;
        if (front == -1) {
            front++;
        }
    }
}
int deQueue() {
    int x = -1;
    if (front == -1 ){
        printf("Queue Underflow");
    }
    else {
        x = queue[front];
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
    }
    return x;
}
void display() {
    int i;
    if (front == -1) {
        printf("Queue Underflow");
    }
    else {
        printf("The elements are : ");
        for (i = 0; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}
int main() {
    int choice, ele;
    while (1)
    {
        printf("1. enQueue\n");
        printf("2. deQueue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element : ");
            scanf("%d", &ele);
            enQueue(ele);
            break;
        case 2:
            ele = deQueue();
            printf("Deleted element : %d", ele);
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        }
    }
}