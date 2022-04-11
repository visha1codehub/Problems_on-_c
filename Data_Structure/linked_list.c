#include <stdio.h>
#include <stdlib.h>
//    **********Creating a Node***********
struct Node
{
    int data;
    struct Node *next; // self refrencing structure
};

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
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = second;

    second->data = 24;
    second->next = third;

    third->data = 36;
    third->next = fourth;

    fourth->data = 48;
    fourth->next = NULL;

    LL_print(head);
    
    return 0;
}