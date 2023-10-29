#include <stdio.h>

int isNonDecreasing(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return 0; // It's not in non-decreasing order
        }
    }
    return 1; // It's in non-decreasing order
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size should be greater than 0.\n");
        return 1;
    }

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isNonDecreasing(arr, n)) {
        printf("The array is in non-decreasing order.\n");
    } else {
        printf("The array is not in non-decreasing order.\n");
    }

    return 0;
}

