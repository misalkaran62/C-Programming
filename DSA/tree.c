#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    float data;
    struct Node *left, *right;
} Node;

void insert(Node **r, float data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    if ((*r) == NULL)
        (*r) = newNode;
    else
    {
        Node *cur, *pre;
        cur = (*r);
        while (cur != NULL)
        {
            pre = cur;
            if (cur->data > newNode->data)
                cur = cur->left;
            else
                cur = cur->right;
        }
        if (pre->data > newNode->data)
            pre->left = newNode;
        else
            pre->right = newNode;
    }
}

void inOrder(Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%.2f", root->data);
        inOrder(root->right);
    }
}
void preOrder(Node *root)
{
    if (root != NULL)
    {
        printf("%.2f", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postorder(Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%.2f", root->data);
    }
}

int search(Node *root, float key)
{
    if (root == NULL)
        return 0;
    if (root->data == key)
        return 1;
    else if (root->data > key)
        search(root->left, key);
    else
        search(root->right, key);
}
int main()
{
    Node *root = NULL;
    float data;
    int ch;

    while (1)
    {
        printf("\n\n1.Insert\n2.Inorder\n3.Preorder\n4.Postorder\n5.Search\n6.Deleat\n7.Exit\nEnter Your Choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter a Data : ");
            scanf("%.2f", &data);
            insert(&root, data);
            break;
        case 2:
            inOrder(root);
            break;
        case 3:
            preOrder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            printf("Enter Data : ");
            scanf("%f", &data);
            if (search(root, data))
                printf("Found !!");
            else
                printf("Not Found !!");
        case 6:
            break;
        case 7:
            return 0;
        default:
            printf("Invalid Choice !!");
        }
    }
}