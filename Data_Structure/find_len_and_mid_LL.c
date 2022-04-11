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
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
int LL_len(struct Node *ptr)
{
    int i = 0;
    do
    {
        i++;
        ptr = ptr->next;
    }while (ptr != NULL);
    return i;
}
void find_middle(struct Node *ptr, int ln)
{
    int i = 1;
    while (i != ln/2)
    {
        ptr = ptr->next;
        i++;
    }
    if (ln%2 != 0)
        printf("Middle is %d.\n",ptr->next->data);
    else
        printf("Middles are %d and %d.\n",ptr->data,ptr->next->data);
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *sixth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *seventh = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = fifth;
    fifth->data = 50;
    fifth->next = sixth;
    sixth->data = 60;
    sixth->next = seventh;
    seventh->data = 70;
    seventh->next = NULL;
    LLprint(head);
    int len = LL_len(head);
    printf("The length of Linked list is %d.\n",len);
    find_middle(head, len);
    return 0;
}