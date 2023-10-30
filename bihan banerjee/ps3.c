#include <stdio.h>

int dec_array(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1]) {
            printf("The array is not sorted in non decreasing order.\n");
            return 0;
        }
    }
    printf("The array is sorted in non decreasing order.\n");
    return 1;
}

int main() {
    int array[] = {6,7,5,4,1,3};
    int n = sizeof(array) / sizeof(array[0]);
    dec_array(array, n);
    return 0;
}