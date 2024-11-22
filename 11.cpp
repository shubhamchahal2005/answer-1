#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    // Ask the user to enter a number
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check if the number is less than or equal to 1 (1 is not prime)
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
    } else {
        // Loop to check if n is divisible by any number from 2 to n-1
        for (int i = 2; i * i <= n; i++) {  // Only check up to square root of n for efficiency
            if (n % i == 0) {
                isPrime = false;
                break;  // No need to check further once a divisor is found
            }
        }

        // Output the result based on the value of isPrime
        if (isPrime) {
            cout << n << " is a prime number." << endl;
        } else {
            cout << n << " is not a prime number." << endl;
        }
    }

    return 0;
}
