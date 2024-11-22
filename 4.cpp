#include <iostream>
using namespace std;

int main() {
    // Declare variables
    float temperature;
    int choice;

    // Ask the user for the conversion choice
    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    // Check if the input choice is valid
    if (choice == 1) {
        // Celsius to Fahrenheit conversion
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        float fahrenheit = (temperature * 9/5) + 32;
        cout << temperature << " Celsius = " << fahrenheit << " Fahrenheit" << endl;
    }
    else if (choice == 2) {
        // Fahrenheit to Celsius conversion
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        float celsius = (temperature - 32) * 5/9;
        cout << temperature << " Fahrenheit = " << celsius << " Celsius" << endl;
    }
    else {
        // Invalid input
        cout << "Invalid choice! Please enter 1 or 2." << endl;
    }

    return 0;
}
