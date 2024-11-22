#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0, remainder;

    // Ask the user to enter a number
    cout << "Enter a positive integer: ";
    cin >> n;

    // Store the original number to compare later
    original = n;

    // Loop to reverse the digits of the number
    while (n > 0) {
        remainder = n % 10;  // Get the last digit
        reversed = reversed * 10 + remainder;  // Build the reversed number
        n /= 10;  // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (original == reversed) {
        cout << original << " is a palindrome number." << endl;
    } else {
        cout << original << " is not a palindrome number." << endl;
    }

    return 0;
}
