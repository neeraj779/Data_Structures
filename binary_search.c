#include <stdio.h>
int binary_saerch(int arr[], int size, int element)
{
    int low = 0, mid, high;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (element > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 7, 5, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int stas = binary_saerch(arr, n, 25);
    printf("%d", stas);
    return 0;
}
