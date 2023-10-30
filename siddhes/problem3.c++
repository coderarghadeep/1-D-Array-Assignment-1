#include <iostream>

using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

// int main() {
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;

//     if (n <= 0) {
//         cout << "Invalid input. Number of elements should be a positive integer." << endl;
//         return 1;
//     }

//     int arr[n];
//     cout << "Enter the elements of the array:" << endl;

//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }

//     if (isSorted(arr, n)) {
//         cout << "The array is sorted in ascending order." << endl;
//     } else {
//         cout << "The array is not sorted in ascending order." << endl;
//     }

//     return 0;
// }
