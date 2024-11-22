#include <iostream>
using namespace std;

int main() {
    // Declare variables for two numbers and the operation
    double num1, num2;
    char operation;

    // Ask the user for the first number
    cout << "Enter first number: ";
    cin >> num1;

    // Ask the user for the second number
    cout << "Enter second number: ";
    cin >> num2;

    // Ask the user for the arithmetic operation (+, -, *, /, %)
    cout << "Enter operation (+, -, *, /, %): ";
    cin >> operation;

    // Perform the operation based on user input
    if (operation == '+') {
        cout << "The result is: " << num1 + num2 << endl;
    }
    else if (operation == '-') {
        cout << "The result is: " << num1 - num2 << endl;
    }
    else if (operation == '*') {
        cout << "The result is: " << num1 * num2 << endl;
    }
    else if (operation == '/') {
        // Check if the second number is zero to avoid division by zero
        if (num2 != 0) {
            cout << "The result is: " << num1 / num2 << endl;
        } else {
            cout << "Error! Division by zero is not allowed." << endl;
        }
    }
    else if (operation == '%') {
        // Modulus operation works only for integers, so check if both numbers are integers
        if (static_cast<int>(num1) == num1 && static_cast<int>(num2) == num2) {
            cout << "The result is: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
        } else {
            cout << "Error! Modulus works only with integers." << endl;
        }
    }
    else {
        cout << "Invalid operation! Please enter one of the following: +, -, *, /, %." << endl;
    }

    return 0;
}
