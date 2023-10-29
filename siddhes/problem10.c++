#include <iostream>
using namespace std;
int findMissingNumber(int arr[], int n) {
    int totalSum = (n * (n + 1)) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    return totalSum - actualSum;
}
// int main() {
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter " << n << " distinct numbers in the range [0, " << n << "]:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int missingNumber = findMissingNumber(arr, n);

//     cout << "The missing number in the range [0, " << n << "] is: " << missingNumber << endl;

//     return 0;
// }
