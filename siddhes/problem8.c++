#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
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

//     int target;
//     cout << "Enter the element to search for: ";
//     cin >> target;

//     int result = linearSearch(arr, n, target);

//     if (result != -1) {
//         cout << "Element found at index " << result << endl;
//     } else {
//         cout << "Element not found in the array." << endl;
//     }

//     return 0;
// }
