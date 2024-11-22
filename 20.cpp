#include <iostream>
using namespace std;

// Function to perform Binary Search
int binarySearch(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Find the middle index

        // Check if key is at mid
        if (arr[mid] == key) {
            return mid; // Return the index if element is found
        }
        // If key is greater than mid, ignore left half
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        // If key is smaller than mid, ignore right half
        else {
            right = mid - 1;
        }
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int n, key;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input the elements of the array
    cout << "Enter " << n << " elements of the array (in sorted order): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element to search
    cout << "Enter the element to search: ";
    cin >> key;

    // Call binarySearch function and store the result
    int result = binarySearch(arr, n, key);

    // Output the result
    if (result != -1) {
        cout << "Element " << key << " found at position: " << result + 1 << endl; // 1-based index
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}
