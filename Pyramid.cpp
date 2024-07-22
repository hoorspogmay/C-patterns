#include <iostream>
using namespace std;

int main() {
    int height = 6; // Define the height of the triangle

    // Generate the triangle
    for (int i = 1; i <= height; i++) {
        // Print leading spaces
        for (int j = height - 1; j >= i; j--) {
            cout << " ";
        }
        // Print stars for the left half of the triangle
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        // Print stars for the right half of the triangle
        for (int k = 1; k < i; k++) { // Changed to 'k < i' to avoid an extra star
            cout << "*";
        }
        cout << "\n"; // Move to the next line after each row
    }

    return 0;
}
