#include <stdio.h>

int findIndexOfElement(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Return the index of the first occurrence of x
        }
    }
    return -1; // x is not found in the array
}

int main() {
    int arr[] = {1, 4, 7, 2, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2; // Element to search for

    int index = findIndexOfElement(arr, n, x);

    if (index != -1) {
        printf("%d found at index %d\n", x, index);
    } else {
        printf("%d not found in the array\n", x);
    }

    return 0;
}
