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
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
