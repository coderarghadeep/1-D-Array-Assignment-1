#include <stdio.h>

void rotateittoleft(int arr[], int n) {
    int a = arr[0]; 

    
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    
    arr[n - 1] = a;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("the original array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rotateittoleft(arr, n);

    printf("\narray rotated to the left: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}