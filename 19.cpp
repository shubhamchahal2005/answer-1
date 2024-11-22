#include <iostream>
using namespace std;

int main() {
    int n, key;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input the elements of the array
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element to search
    cout << "Enter the element to search: ";
    cin >> key;

    // Perform Linear Search
    bool found = false;
    int position = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            position = i; // Store the position
            break;
        }
    }

    // Output the result
    if (found) {
        cout << "Element " << key << " found at position: " << position + 1 << endl; // 1-based index
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}
