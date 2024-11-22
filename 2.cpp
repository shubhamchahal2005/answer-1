#include <iostream>
#include <cmath> // For M_PI constant
using namespace std;

int main() {
    // Declare a variable for the radius
    float radius;

    // Input the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the circumference of the circle
    float circumference = 2 * 3.14 * radius;

    // Calculate the area of the circle
    float area = 3.14 * radius * radius;

    // Output the results
    cout << "Circumference of the circle: " << circumference << endl;
    cout << "Area of the circle: " << area << endl;

    return 0;
}
