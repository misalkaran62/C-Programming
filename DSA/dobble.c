#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next, *pre;
} Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->pre = newNode->next = NULL;
    return newNode;
}
void append(Node **r, int data)
{
    Node *newNode = createNode(data);
    if ((*r) == NULL)
        (*r) = newNode;
    else
    {
        Node *temp = (*r);
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->pre = temp;
    }
}
void display(Node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}
int search(Node *head, int data)
{
    while (head != NULL)
    {
        if (head->data == data)
            return 1;
        head = head->next;
    }
}
int count(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void insertFirst(Node **r, int data)
{
    Node *newNode = createNode(data);
    if ((*r) == NULL)
        (*r) = newNode;
    else
    {
        newNode->next = (*r);
        (*r)->pre = newNode;
        (*r) = newNode;
    }
}
void deleteFirst(Node **r)
{
    if ((*r)->next == NULL)
        (*r) = NULL;
    else
    {
        Node *del = (*r);
        (*r) = (*r)->next;
        del->next = (*r)->pre = NULL;
        free(del);
    }
}
void deleteLast(Node **r)
{
    if ((*r)->next == NULL)
        (*r) = NULL;
    else
    {
        Node *temp = (*r);
        while (temp->next->next != NULL)
            temp = temp->next;
        temp->next->pre = NULL;
        temp->next = NULL;
    }
}
void insertBetween(Node *head, int data, int pos)
{
    Node *newNode = createNode(data);
    int i;
    Node *temp = head;

    for (i = 2; i < pos; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next->pre = newNode;
    newNode->pre = temp;
    temp->next = newNode;
}
int main()
{
    int ch, data, pos;
    Node *head = NULL;
    while (1)
    {
        // printf("~~~~~~~~~~~~~~Choose~~~~~~~~~~~~~");
        printf("\n\n1. Append\n2. display\n3.Search \n4.Count\n5.Insert First\n6. Delete First\n7.Deleat last \n8.Insert By Position\n10.exit \nEnter your choice :");
        scanf("%d", &ch);
        // printf("~~~~~~~~~~~~~~Choose~~~~~~~~~~~~~");
        switch (ch)
        {
        case 1:
            printf("Enter A data :");
            scanf("%d", &data);
            append(&head, data);
            break;
        case 2:
            display(head);
            break;
        case 3:
            printf("Enter a data for search");
            scanf("%d", &data);
            if (search(head, data))
                printf("Found !!");
            else
                printf("NOT FOUND!!");
            break;
        case 4:
            printf("Count is : %d", count(head));
            break;
        case 5:
            printf("Enter the data :");
            scanf("%d", &data);
            insertFirst(&head, data);
            break;
        case 6:
            if (head == NULL)
            {
                printf("Linked list is Empty !! ");
                continue;
            }
            else
            {
                deleteFirst(&head);
            }
            break;
        case 7:
            if (head == NULL)
            {
                printf("Linked List is empty");
                continue;
            }
            else
            {

                deleteLast(&head);
            }
            break;
        case 8:
            printf("Enter a position :");
            scanf("%d", &pos);
            printf("Enter a data :");
            scanf("%d", &data);
            if (pos == 1)
            insertFirst(&head, data);
            else if (pos == count(head) + 1)
                append(&head, data);
            else if (pos > 1 && pos <= count(head))
                insertBetween(head, data, pos);
            else
                printf("INVALID Choice !!");
            break;
        case 9:

            break;
        case 10:
            return 0;
            break;

        default:
            printf("Invalid Choice !!");
            break;
        }
    }
}