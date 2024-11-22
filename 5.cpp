#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the score
    int score;

    // Ask the user to input the test score
    cout << "Enter the test score (0-100): ";
    cin >> score;

    // Check the score range and determine the grade
    if (score >= 90) {
        cout << "Grade: A" << endl;
    } 
    else if (score >= 80) {
        cout << "Grade: B" << endl;
    } 
    else if (score >= 70) {
        cout << "Grade: C" << endl;
    } 
    else if (score >= 60) {
        cout << "Grade: D" << endl;
    } 
    else if (score >= 50) {
        cout << "Grade: E" << endl;
    } 
    else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
