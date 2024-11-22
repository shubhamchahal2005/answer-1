#include <iostream>
#include <cmath>  // For power function
using namespace std;

int main() {
    int n, original, sum = 0, remainder, numDigits;

    // Input the number
    cout << "Enter a number: ";
    cin >> n;

    // Store the original number to compare later
    original = n;

    // Find the number of digits in the number
    numDigits = log10(n) + 1;

    // Loop to calculate the sum of each digit raised to the power of numDigits
    while (n > 0) {
        remainder = n % 10;  // Extract the last digit
        sum += pow(remainder, numDigits);  // Add the digit raised to the power of numDigits
        n /= 10;  // Remove the last digit
    }

    // Check if the sum equals the original number
    if (sum == original) {
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is not an Armstrong number." << endl;
    }

    return 0;
}
