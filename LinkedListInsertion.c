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
        printf("Elemnt : %d\n", n_ptr->data);
        n_ptr = n_ptr->next;
    }
    printf("\n");
}

struct Node *InsertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

void InsertInBetween(struct Node *head, int index, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    int i = 0;
    struct Node *p = head;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->next = p->next;
    p->next = ptr;
}

void InsertAtLast(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    int i = 0;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
        i++;
    }
    p->next = ptr;
    ptr->next = NULL;
}

void InsertAfterNode(struct Node *node, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = node->next;
    node->next = ptr;
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

    // assiging values and address of fourth object
    fourth->data = 72;
    fourth->next = NULL;

    // travesing before insertion
    LinkedListTrraversal(head);
    // traversing after insertion at firts
    head = InsertAtFirst(head, 99);
    LinkedListTrraversal(head);

    // traversing after insertion in between
    InsertInBetween(head, 2, 77);
    LinkedListTrraversal(head);

    // traversing after insertion at last
    InsertAtLast(head, 200);
    LinkedListTrraversal(head);

    // traversing after insertion after node
    InsertAfterNode(third, 108);
    LinkedListTrraversal(head);
    return 0;
}