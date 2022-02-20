#include <stdio.h>
#include <stdlib.h>

typedef struct my_array
{
    int used_size;
    int total_size;
    int *ptr;
} my_array;

void create_arrray(my_array *a, int uSize, int tSize)
{

    a->total_size = uSize;
    a->used_size = tSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void show_data(my_array *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d", (a->ptr)[i]);
    }
}

void set_data(my_array *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter value of %d index", i);
        scanf("%d", &(a->ptr[i]));
    }
}
int main()
{
    my_array marks;
    create_arrray(&marks, 100, 5);
    set_data(&marks);
    show_data(&marks);

    return 0;
}