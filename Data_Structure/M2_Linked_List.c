#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void LLprint(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d-> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
struct Node *delete_first(struct Node *head)
{
    head = head->next;
    return head;
}
struct Node *delete_end(struct Node *head)
{
    struct Node *p = head;
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    p->next = NULL;
    return head;
}
int main()
{
    struct Node *head, *newnode, *temp;
    head = NULL;
    int choice, i = 1;
    printf("Enter the overall number of nodes in Linked List: ");
    scanf("%d",&choice);
    while (i != choice)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data: ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        i++;
        // printf("Do you wanna conti\nue (0,1): ");
        // scanf("%d",&choice);
    }
    LLprint(head);
    // head = delete_first(head);
    head = delete_end(head);
    LLprint(head);
    return 0;
}