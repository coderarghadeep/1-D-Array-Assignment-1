#include <stdio.h>

void reverse(int array[], int start, int end) {
    int copy;
    while (start < end) {
        copy = array[start];
        array[start] = array[end];
        array[end] = copy;
        start++;
        end--;
    }
}

void rotate(int array, int n, int k) {
    k = k % n;
    reverse(array, 0, n - 1);
    reverse(array, 0, k - 1);
    reverse(array, k, n - 1);
}

void print(int array[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(array) / sizeof(array[0]);
    int k = 2;
    rotate(array, n, k);
    printf("Rotated array is: \n");
    print(array, n);
    return 0;
}