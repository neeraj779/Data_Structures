#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTrraversal(struct Node *n_ptr)
{
    while (n_ptr != NULL)
    {
        printf("%d ", n_ptr->data);
        n_ptr = n_ptr->next;
    }
}

int main()
{
    // creating three objects of Struct Node type
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // assiging of heap memeory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // assiging values and address of head object
    head->data = 7;
    head->next = second;

    // assiging values and address of second object
    second->data = 3;
    second->next = third;

    // assiging values and address of third object
    third->data = 25;
    third->next = NULL;

    LinkedListTrraversal(head);
    return 0;
}