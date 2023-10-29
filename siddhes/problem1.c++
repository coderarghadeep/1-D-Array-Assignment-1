#include <iostream>

using namespace std;

int findLargestElement(int arr[], int n) {
    int largest = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Number of elements should be a positive integer." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter the elements of the array:" << endl;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int largest = findLargestElement(arr, n);

    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}