#include <iostream>
#include <vector>
#include <algorithm> // For reverse function
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n); // Dynamic array to store elements
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Take array input from user
    }

    // Initialize variables
    int minimum = arr[0];
    int maximum = arr[0];
    int sum = 0;

    // Compute minimum, maximum, and sum
    for (int i = 0; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
        sum += arr[i];
    }

    // Reverse the array
    vector<int> reversedArr = arr; // Copy original array
    reverse(reversedArr.begin(), reversedArr.end());

    // Display results
    cout << "Minimum value: " << minimum << endl;
    cout << "Maximum value: " << maximum << endl;
    cout << "Sum of elements: " << sum << endl;

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << reversedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
