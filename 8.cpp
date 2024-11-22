#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Ask the user to enter the value of n
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check if the input is a positive integer
    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
    } else {
        // Loop to calculate the sum of first n natural numbers
        for (int i = 1; i <= n; i++) {
            sum += i;  // Add i to the sum
        }

        // Output the result
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }

    return 0;
}
