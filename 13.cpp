#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Find the smaller number between a and b to limit the loop
    int min_num = (a < b) ? a : b;  // The smaller of a and b

    // Loop to find the GCD
    int gcd = 1;  // Default GCD value
    for (int i = 1; i <= min_num; i++) {
        // Check if i is a divisor of both a and b
        if (a % i == 0 && b % i == 0) {
            gcd = i;  // Update GCD to the current divisor
        }
    }

    // Output the GCD
    cout << "The GCD of " << a << " and " << b << " is: " << gcd << endl;

    return 0;
}
