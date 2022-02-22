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
        printf("Element : %d\n", n_ptr->data);
        n_ptr = n_ptr->next;
    }
    printf("\n");
}

struct Node *DeletionAtFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

void DeletionAtIndex(struct Node *head, int index)
{
    struct Node *ptr = head;
    struct Node *d_ptr = head->next;

    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        d_ptr = d_ptr->next;
        i++;
    }
    ptr->next = d_ptr->next;
    free(d_ptr);
}

void DeletionAtEnd(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *d_ptr = head->next;
    while (d_ptr->next != NULL)
    {
        ptr = ptr->next;
        d_ptr = d_ptr->next;
    }
    ptr->next = NULL;
    free(d_ptr);
}

void DeletionAtGivenValue(struct Node *head, int value)
{
    struct Node *ptr = head;
    struct Node *d_ptr = head->next;
    ;
    while (d_ptr->data != value && d_ptr->next != NULL)
    {
        ptr = ptr->next;
        d_ptr = d_ptr->next;
    }
    if (d_ptr->data == value)
    {
        ptr->next = d_ptr->next;
        free(d_ptr);
    }
    else
    {
        printf("Value does not exist\n");
    }
}

int main()
{
    // creating three objects of Struct Node type
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // assiging of heap memeory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // assiging values and address of head object
    head->data = 7;
    head->next = second;

    // assiging values and address o f second object
    second->data = 3;
    second->next = third;

    // assiging values and address of third object
    third->data = 25;
    third->next = fourth;

    // assiging values and address of third object
    fourth->data = 33;
    fourth->next = NULL;

    // LinkedListTrraversal(head);
    // // traversing linked list after Deltion at first
    // head = DeletionAtFirst(head);
    // LinkedListTrraversal(head);

    // // trvaersing linked list after deletion at index
    // DeletionAtIndex(head, 2);
    // LinkedListTrraversal(head);

    // // trvaersing linked list after deletion at end
    // DeletionAtEnd(head);
    // LinkedListTrraversal(head);

    // traversing linked list after index of particulat value
    DeletionAtGivenValue(head, 25);
    LinkedListTrraversal(head);
    return 0;
}