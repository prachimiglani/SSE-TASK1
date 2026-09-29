#include <stdio.h>

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }

    return -1;
}

int main()
{
    // Test Case 1
    int arr1[] = {1, 2, 3, 4};
    int x1 = 3;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Output: %d\n", search(arr1, n1, x1));

    // Test Case 2
    int arr2[] = {10, 8, 30, 4, 5};
    int x2 = 5;
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Output: %d\n", search(arr2, n2, x2));

    // Test Case 3
    int arr3[] = {10, 8, 30};
    int x3 = 6;
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    printf("Output: %d\n", search(arr3, n3, x3));

    return 0;
}