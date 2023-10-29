#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    int nonZeroIdx = 0;  // Index for non-zero elements

    // Iterate through the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // Swap the current non-zero element with the element at nonZeroIdx
            int temp = arr[i];
            arr[i] = arr[nonZeroIdx];
            arr[nonZeroIdx] = temp;
            nonZeroIdx++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12, 0, 0, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    moveZerosToEnd(arr, n);

    printf("Array after moving zeros to the end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
