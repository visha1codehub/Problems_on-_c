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
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
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
struct Node *delete_index(struct Node *head, int index)
{
    struct Node *p = head;
    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    p->next = p->next->next;
    return head;
}
struct Node *delete_value(struct Node *head, int value)
{
    struct Node *p = head;
    while (p->next->data != value)
    {
        p = p->next;
    }
    p->next = p->next->next;
    return head;
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = NULL;
    LLprint(head);
    // head = delete_first(head);
    // LLprint(head);
    // head = delete_end(head);
    // LLprint(head);
    // head = delete_index(head, 2);
    // LLprint(head);
    head = delete_value(head, 20);
    LLprint(head);
    return 0;
}