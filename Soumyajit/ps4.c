#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0) {
        return 0;
    }

    int uniqueIdx = 0; // Index for the unique elements

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[uniqueIdx]) {
            uniqueIdx++;
            arr[uniqueIdx] = arr[i];
        }
    }

    return uniqueIdx + 1; // Return the new length of the array
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
