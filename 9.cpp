#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;  // Using long long to handle large factorial values

    // Ask the user to enter a number
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check if the entered number is a non-negative integer
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Loop to calculate the factorial
        for (int i = 1; i <= n; i++) {
            factorial *= i;  // Multiply factorial by i
        }

        // Output the result
        cout << "The factorial of " << n << " is: " << factorial << endl;
    }

    return 0;
}
