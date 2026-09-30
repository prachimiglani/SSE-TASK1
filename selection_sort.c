#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++)
    {
        // Assume the current position has the minimum element
        min_idx = i;

        // Find the minimum element in the unsorted portion
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        // Swap the minimum element with the current element
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void printArray(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}