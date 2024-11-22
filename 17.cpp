#include <iostream>
#include <cmath> // For pow function
using namespace std;

int main() {
    int n; // Number of terms
    cout << "Enter the number of terms (n): ";
    cin >> n;

    double sum = 0.0; // Initialize sum to 0

    for (int i = 1; i <= n; i++) {
        double term = 1.0 / pow(i, i); // Compute 1 / (i^i)
        if (i % 2 == 0) {
            term = -term; // Alternate the sign for even terms
        }
        sum += term; // Add the term to the sum
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
