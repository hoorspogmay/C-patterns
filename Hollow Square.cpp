#include <iostream>
using namespace std;

int main() {
    int size = 6; // Define the size of the square

    // Generate the square
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            // Print '*' for borders and spaces for the inside
            if (i == 1 || j == 1 || i == size || j == size) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n"; // Move to the next line after each row
    }

    return 0;
}
