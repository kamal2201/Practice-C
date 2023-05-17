#include <stdio.h>
#define SIZE 10
int stack[SIZE];
int top = -1;
void push(int x) {
    if (top == SIZE - 1) {
        printf("Stack Overflow");
    }
    else {
        top++;
        stack[top] = x;
    }
}
int pop() {
    int x = -1;
    if (top == -1) {
        printf("Stack Underflow");
    }
    else {
        x = stack[top];
        top--;
    }
    return x;
}
void display(){
    int i;
    if (top == -1) {
        printf("Stack is empty");
    }
    for (i = 0; i<= top;i++) {
        printf("%d\t", stack[i]);
    }
}

int main() {
    int choice,ele;
    while (1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter Ur choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: 
                printf("Enter the element:");
                scanf("%d", &ele);
                push(ele);
                break;
            case 2: 
                ele = pop(); 
                if(ele != -1)
                    printf("Popped element: %d", ele);
                break;
            case 3: 
                display(); 
                break;
            case 4: 
                return 0; 
        }
    }
}