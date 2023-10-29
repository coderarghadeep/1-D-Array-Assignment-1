#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n <= 1)
        return n;

    int currentIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[currentIndex]) {
            currentIndex++;
            arr[currentIndex] = arr[i];
        }
    }

    return currentIndex + 1;
}

// int main() {
//     int n;
//     cout << "Enter the number of elements in the sorted array: ";
//     cin >> n;

//     if (n <= 0) {
//         cout << "Array size should be greater than 0." << endl;
//         return 1;
//     }

//     int arr[n];

//     cout << "Enter the sorted array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int newSize = removeDuplicates(arr, n);

//     cout << "Array after removing duplicates: ";
//     for (int i = 0; i < newSize; i++) {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }
