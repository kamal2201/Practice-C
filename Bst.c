#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}bstnode;

bstnode *insert(bstnode * temp, int value)
{
    if(temp == NULL)
    {
        temp = (bstnode*)malloc(sizeof(bstnode));
        temp->data = value;
        temp->left = NULL;
        temp->right = NULL;
    }
    else if(temp->data == value)
    {
        printf("Node already exists");
    }
    else if(temp->data > value)
    {
        temp->left = insert(temp->left, value);
    }
    else
    {
        temp->right = insert(temp->right, value);
    }
    return temp;
}

void inorder(bstnode * root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}

void preorder(bstnode* root)
{
    if(root != NULL)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(bstnode * root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
    }
}

bstnode* findmin(bstnode* temp)
{
    if(temp->left)
    {
        return findmin(temp->left);
    }
    return temp;
}

bstnode* findmax(bstnode * temp)
{
    if(temp->right)
    {
        return findmax(temp->right);
    }
    return temp;
}

bstnode * delete(bstnode * node, int value)
{
    bstnode * temp;
    if(node->data == NULL)
    {
        printf("Node not found");
    }
    else if(node->data < value)
    {
        node->right = delete(node->right, value);
    }
    else if(node->data > value)
    {
        node->left = delete(node->left, value);
    }
    else
    {
        if(node->left && node->right)
        {
            temp = findmin(node->right);
            node->data = temp->data;
            node->right = delete(node->right, temp->data);
        }
        else
        {
            temp = node;
            if(node->right == NULL)
            {
                node = node->left;
            }
            else if(node->left == NULL)
            {
                node = node->right;
            }
            free(temp);
        }
    }
    return node;
}

int main()
{
    bstnode * root = NULL, *temp;
    int choice, ele;
    printf("MENU\n");
    printf("1. Insert\n");
    printf("2. Inorder\n");
    printf("3. Preorder\n");
    printf("4. Postorder\n");
    printf("5. Find Min\n");
    printf("6. Find Max\n");
    printf("7. Delete\n");
    printf("8. Exit\n");
    while(1)
    {
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the element you want to insert : ");
                scanf("%d", &ele);
                root = insert(root, ele);
                break;
            case 2:
                printf("Inorder : ");
                inorder(root);
                break;
            case 3:
                printf("Preorder : ");
                preorder(root);
                break;
            case 4:
                printf("Postorder : ");
                postorder(root);
                break;
            case 5:
                if(root != NULL)
                {
                    temp = findmin(root);
                    printf("%d", temp->data);
                }
                break;
            case 6:
                if(root != NULL)
                {
                    temp = findmax(root);
                    printf("%d", temp->data);
                }   
                break;
            case 7:
                printf("Enter the element you want to delete : ");
                scanf("%d",&ele);
                root = delete(root, ele);
                break;
            case 8:
                return 0;
        }
    }
}