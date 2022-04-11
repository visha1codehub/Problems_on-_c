#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
void print_LL(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 11;
    head->prev = NULL;
    head->next = second;

    second->data = 22;
    second->prev = head;
    second->next = third;

    third->data = 33;
    third->prev = second;
    third->next = fourth;

    fourth->data = 44;
    fourth->prev = third;
    fourth->next = NULL;

    print_LL(head);
    return 0;
}