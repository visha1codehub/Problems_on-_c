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
struct Node *LL_Rev(struct Node *head)
{
    struct Node *prev = NULL;
    struct Node *curr = head;
    struct Node *nex = NULL;
    while (curr != NULL)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    head = prev;
}
int main()
{
    struct Node *head = NULL;
    int n;
    printf("Enter total numbers of nodes in Linked List: ");
    scanf("%d", &n);
    head = push(head, n);
    LLprint(head);
    head = LL_Rev(head);
    LLprint(head);
    return 0;
}