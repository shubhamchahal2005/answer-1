#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Ask the user to enter a number
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check if the number is positive
    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
    } else {
        // Loop to find the sum of divisors of the number (excluding the number itself)
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;  // Add divisor to sum
            }
        }

        // Check if the sum of divisors is equal to the number
        if (sum == n) {
            cout << n << " is a perfect number." << endl;
        } else {
            cout << n << " is not a perfect number." << endl;
        }
    }

    return 0;
}
