#include <stdio.h>
// Traversal
void display(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
}

// Insertion
int IndesxInsertion(int arr[], int size, int capacity, int index, int elememnt)
{
    if (size >= capacity)
    {
        return 1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = elememnt;
}

int main()
{
    int arr[100] = {7, 25, 3, 1, 33};
    int size = 5;
    IndesxInsertion(arr, size, 100, 3, 5);
    size++;
    display(arr, size);
    return 0;
}