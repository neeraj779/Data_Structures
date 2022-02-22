#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void traverse(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr->next != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("Element : %d\n", ptr->data);
    printf("\nNow printing in reverse manner\n");

    while (ptr->prev != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->prev;
    }
    printf("Element : %d\n", ptr->data);
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 2;
    head->prev = NULL;
    head->next = second;

    second->data = 4;
    second->prev = head;
    second->next = third;

    third->data = 6;
    third->prev = second;
    third->next = fourth;

    fourth->data = 8;
    fourth->prev = third;
    fourth->next = NULL;

    traverse(head);

    return 0;
}