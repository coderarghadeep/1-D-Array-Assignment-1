#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    
    int expectedSum = (n * (n + 1)) / 2;
    
    
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    
    
    return expectedSum - actualSum;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d distinct numbers in the range [0, %d]:\n", n, n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int missingNumber = findMissingNumber(arr, n);
    
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}
