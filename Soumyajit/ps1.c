#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int largest = -1; // Initialize the largest element to a small value

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        int element;
        scanf("%d", &element);
        if (element > largest) {
            largest = element; // Update the largest if a larger element is found
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
