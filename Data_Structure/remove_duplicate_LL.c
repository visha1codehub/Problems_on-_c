#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *push(struct Node *head, int x)
{
    struct Node *newnode, *temp;
    int i = 0;
    while (i != x)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            temp = newnode;
            head = temp;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        i++;
    }
    return head;
}
void LLprint(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d-> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
struct Node *rm_duplicate(struct Node *head)
{
    struct Node *temp1 = head;
    while (temp1 != NULL)
    {
        struct Node *temp2 = head->next;
        while (temp2 != NULL)
        {
            if (temp1->data == temp2->data)
            {
                temp2->next = temp2->next->next;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return head;
}
int main()
{
    struct Node *head = NULL;
    int n;
    printf("Enter total numbers of nodes in Linked List: ");
    scanf("%d", &n);
    head = push(head, n);
    LLprint(head);
    head = rm_duplicate(head);
    LLprint(head);
    return 0;
}