#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTrraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node* insertionAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p_ptr = head;
    while (p_ptr->next != head)
    {
        p_ptr = p_ptr->next;
    }
    p_ptr->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
    
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

    // assiging values and address of ptr object
    head->data = 7;
    head->next = second;

    // assiging values and address o f second object
    second->data = 3;
    second->next = third;

    // assiging values and address of third object
    third->data = 25;
    third->next = fourth;

    // assiging values and address of third object
    fourth->data = 92;
    fourth->next = head;

    LinkedListTrraversal(head);
    head = insertionAtFirst(head, 2525);
    LinkedListTrraversal(head);
    return 0;
}