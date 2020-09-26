#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int indDeletion(int arr[], int size, int index)
{

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return 1;
}

int main()
{

    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, index = 4;

    indDeletion(arr, size, index);

    // size -= 1;

    printArray(arr, size);

    return 0;
}