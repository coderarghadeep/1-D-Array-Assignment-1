#include <stdio.h>

void removeingtheduplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return;

    int newarray[n];

    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            newarray[j] = arr[i];
            j++;
        }
    }
    newarray[j] = arr[n - 1];

    for (int i = 0; i < n; i++) {
        arr[i] = newarray[i];
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    removeingtheduplicates(arr, n);

    printf("Array after removing  the duplicates: \n");
    printArray(arr, n);

    return 0;
}