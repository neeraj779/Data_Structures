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
    for (int i = del_index; i < size - 1; i++)
    {
        arr[del_index] = arr[del_index + 1];
    }
    printf("\nDeletion has been done without any error -- :)\n");
}

// Linaer Serach
void Linear_Search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("\nGiven element is in index number : %d", i);
            break;
        }
        else if (i == size)
        {
            printf("Element not found");
            break;
        }
    }
}

int binary_search(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    mid = (low + high) / 2;
    high = size - 1;
    while (low <= high)
    {
        if (element == arr[mid])
        {
            return mid;
        }
        if (element > arr[mid])
        {
            low = mid + 1;
            mid = (low + high) / 2;
        }
        else
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }
    }
    return -1;
}
int main()
{
    int arr[100] = {2, 4, 8, 9, 12, 16, 25};
    int search = binary_search(arr, 7, 16);
    printf("%d", search);
    // int size = 5;
    // Linear_Search(arr, size, 3);
    // IndesxInsertion(arr, size, 100, 3, 5);
    // size += 1;
    // display(arr, size);
    // Deletion(arr, size, 2);
    // size -= 1;
    // display(arr, size);
    return 0;
}