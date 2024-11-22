#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        char ch = 'A' + i;  // Start with the letter corresponding to the row number
        for (int j = 0; j <= i; j++) {
            cout << ch-- << " ";  // Print and decrement the character
        }
        cout << endl;  // Move to the next line
    }

    return 0;
}
