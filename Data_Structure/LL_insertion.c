#include <stdio.h>
#include <stdlib.h>
//    **********Creating a Node***********
struct Node
{
    int data;
    struct Node *next; // self refrencing structure
};
        //  *********At beginning*********
struct Node *insert_first(struct Node *head, int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;

    newnode->next = head;
    return newnode;
}
        //  *********After given index**********
struct Node *insert_index(struct Node *head, int data, int index)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;

    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    newnode->next = p->next;
    p->next = newnode;
    return head;
}
        // *********At ending**********
struct Node *insert_end(struct Node *head, int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;

    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newnode;
    newnode->next = NULL;
    return head;
}
        //    *********After given node*********
struct Node *insert_node(struct Node *head, struct Node *prenode, int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;

    newnode->next = prenode->next;
    prenode->next = newnode;
    return head;
}
        //  *********Traverse the Linked List*********
void LL_print(struct Node *ptr)
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

    head->data = 12;
    head->next = second;

    second->data = 24;
    second->next = third;

    third->data = 36;
    third->next = fourth;

    fourth->data = 48;
    fourth->next = NULL;

    printf("\nOrignal Linked List.....\n");
    LL_print(head);

    printf("\nAfter Insertion at the beginning.....\n");
    head = insert_first(head, 111);
    LL_print(head);

    printf("\nAfter Insertion at the given index.....\n");
    head = insert_index(head, 222, 2);
    LL_print(head);

    printf("\nAfter Insertion at the ending.....\n");
    head = insert_end(head, 333);
    LL_print(head);

    printf("\nAfter Insertion at the given node.....\n");
    head = insert_node(head, second, 444);
    LL_print(head);
    return 0;
}