#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n) {
    if (n <= 1)
        return;

    int temp = arr[0];

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;
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

//     leftRotateByOne(arr, n);

//     cout << "Array after left rotation by one position: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }
