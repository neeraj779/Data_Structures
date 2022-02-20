#include <stdio.h>
#include <stdlib.h>
// Traversal
void display(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

// Insertion
int IndesxInsertion(int arr[], int size, int capacity, int index, int elememnt)
{
    if (size >= capacity)
    {
        printf("\nInsertion can not be perform as size limit already exceeded -- :(\n");
        exit(0);
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = elememnt;
    printf("\nInsertion has been done without any error -- :)\n");
}

// Deletion
void Deletion(int arr[], int size, int del_index)
{
    for (int i = del_index; i < size-1; i++)
    {
        arr[del_index] = arr[del_index + 1];
    }
    printf("\nDeletion has been done without any error -- :)\n");
}

int main()
{
    int arr[100] = {7, 25, 3, 1, 33};
    int size = 5;
    IndesxInsertion(arr, size, 100, 3, 5);
    size += 1;
    display(arr, size);
    Deletion(arr, size, 2);
    size -= 1;
    display(arr, size);
    return 0;
}