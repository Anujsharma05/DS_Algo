#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        printf("array already full");
        return -1;
    }

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = element;

    return 1;
}

int main()
{

    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3;

    indInsertion(arr, size, element, 100, index);

    size += 1;

    printArray(arr, size);

    return 0;
}