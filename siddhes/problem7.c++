#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int nonZeroIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }

    for (int i = nonZeroIndex; i < n; i++) {
        arr[i] = 0;
    }
}

// int main() {
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;

//     if (n <= 0) {
//         cout << "Array size should be greater than 0." << endl;
//         return 1;
//     }

//     int arr[n];

//     cout << "Enter the array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     moveZeroes(arr, n);

//     cout << "Array after moving zeroes to the end: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
