#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void append(node **r, int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;
    if ((*r) == NULL)
        (*r) = newnode;
    else
    {
        node *temp = (*r);
        while (temp->next != NULL)

            temp = temp->next;
        temp->next = newnode;
    }
}
void display(node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}
int search(node *head, int data)
{
    while (head != NULL)
    {
        if (head->data == data)
            return 1;
        head = head->next;
    }
}
int count(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void insertFirst(node **r, int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = ((*r) == NULL) ? NULL : (*r);
    (*r) = newnode;
}
void deleteFirst(node **r)
{
    node *del = (*r);
    if ((*r) == NULL)

        return;

    (*r) = (*r)->next;
    del->next = NULL;
    free(del);
}
void deletLast(node **r)
{
    if ((*r) == NULL)
        return;
    if ((*r)->next == NULL)
        deleteFirst(r);
    else
    {
        node *temp = (*r);
        while (temp->next->next != NULL)
            temp = temp->next;
        temp->next = NULL;
    }
}
void insertBetween(node *head, int pos, int data)
{
    int i;
    node *newnode = (node *)malloc(sizeof(node));
    node *temp = head;
    newnode->data=data;

    for (i = 2; i < pos; i++)
        temp = temp->next;
    newnode->next = temp->next;
    temp->next = newnode;
}
int main()
{
    int data, ch,pos;
    node *head = NULL;
    while (1)
    {
        printf("\n\n1. Append\n2. display\n3.Search \n4.Count\n5.Insert First\n6. Delete Last \n7.Delet First \n8.Insert By Position\n10.exit \n Enter your choice :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enetr a date :");
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
            printf("Enetr a data :");
            scanf("%d", &data);
            insertFirst(&head, data);
            break;
        case 6:
            deleteFirst(&head);
            break;
        case 7:
            deletLast(&head);
            break;
        case 8:
            printf("Enter A Position :");
            scanf("%d", &pos);
            printf("Enetr Data:");
            scanf("%d", &data);
            if (pos == 1)
                insertFirst(&head, data);
            else if (pos == count(head) + 1)
                append(&head, data);
            else if (pos > 1 && pos <= count(head))
                insertBetween(head, pos, data);
            else
                printf("Inavlid Position !!");
        case 10:
            return 0;
            break;
        default:
            printf("\nInvalid choice !!");
            break;
        }
    }
    return 0;
}