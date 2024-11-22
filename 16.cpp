#include <iostream>
#include <cmath> // For pow function
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    double sum = 0;  // Initialize the sum to 0

    for (int i = 1; i <= n; i++) {
        double term = pow(i, n);  // Compute i^n
        if (i % 2 == 0) {
            term = -term;  // Alternate sign for even terms
        }
        sum += term;  // Add the term to the sum
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
