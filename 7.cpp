#include <iostream>
using namespace std;

int main() {
    int num, i;

    // Ask the user for the number
    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    // Loop to print multiplication table
    cout << "Multiplication table of " << num << " is:" << endl;
    for (i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
