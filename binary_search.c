#include <stdio.h>

int binarySearch(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
            return 1;

        if (arr[mid] < k)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return 0;
}

int main()
{
    // Test Case 1
    int arr1[] = {1, 2, 3, 4, 6};
    int k1 = 6;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Output: %s\n",
           binarySearch(arr1, n1, k1) ? "true" : "false");

    // Test Case 2
    int arr2[] = {1, 2, 4, 5, 6};
    int k2 = 3;
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Output: %s\n",
           binarySearch(arr2, n2, k2) ? "true" : "false");

    // Test Case 3
    int arr3[] = {2, 3, 5, 6};
    int k3 = 1;
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    printf("Output: %s\n",
           binarySearch(arr3, n3, k3) ? "true" : "false");

    return 0;
}