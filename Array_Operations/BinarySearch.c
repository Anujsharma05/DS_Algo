#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{

    int low, mid, high;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        // 2 , 5 ,9, 13,  19, 43, 54
        if (arr[mid] == element)
        {
            return mid;
        }

        if (arr[mid] < element)
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
    int arr[] = {2, 5, 9, 13, 19, 43, 54};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 18;

    int indexFound = binarySearch(arr, size, element);

    if (indexFound == -1)
    {
        printf("element not found");
    }
    else
    {
        printf("element found at index: %d", indexFound);
    }
    return 0;
}
