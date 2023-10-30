#include <iostream>

using namespace std;

int findSecondSmallest(int arr[], int n) {
    if (n < 2) {
        cout << "The array should have at least two elements to find the second smallest." << endl;
        return -1;
    }

    int smallest = arr[0];
    int secondSmallest = -1;

    for (int i = 1; i < n; ++i) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest || secondSmallest == -1) {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "The array should have at least two elements to find the second largest." << endl;
        return -1;
    }

    int largest = arr[0];
    int secondLargest = -1; 

    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest || secondLargest == -1) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
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

//     int secondSmallest = findSecondSmallest(arr, n);
//     int secondLargest = findSecondLargest(arr, n);

//     if (secondSmallest == -1) {
//         cout << "Second smallest element not found." << endl;
//     } else {
//         cout << "The second smallest element in the array is: " << secondSmallest << endl;
//     }

//     if (secondLargest == -1) {
//         cout << "Second largest element not found." << endl;
//     } else {
//         cout << "The second largest element in the array is: " << secondLargest << endl;
//     }

//     return 0;
// }
