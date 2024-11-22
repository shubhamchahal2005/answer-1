#include <iostream>
using namespace std;

int main() {
    // Declare variables
    float length, width;
    
    // Input length and width of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    
    // Calculate the perimeter
    float perimeter = 2 * (length + width);
    
    // Calculate the area
    float area = length * width;
    
    // Output the results
    cout << "Perimeter of the rectangle: " << perimeter << endl;
    cout << "Area of the rectangle: " << area << endl;
    
    return 0;
}
