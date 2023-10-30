#include <stdio.h>
void duplicate(int array[], int n) {
    if (n == 0 || n== 1)
        return;

    int temp[n];

    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (array[i] != array[i + 1]) {
            temp[j] = array[i];
            j++;
        }
    }
    temp[j] = array[n - 1];

    for (int i = 0; i < n; i++) {
        array[i] = temp[i];
    }
}

void print(int array[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int array[] = {1, 1, 2, 2, 3,3,4,4,5,6,7,7,8,9};
    int n = sizeof(array) / sizeof(array[0]);

    duplicate(array, n);

    printf("Array after removing the duplicates: \n");
    print(array, n);

    return 0;
}