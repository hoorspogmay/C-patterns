#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int height = 6; // Define the height of the diamond

    // Upper part of the diamond
    for (int i = 1; i <= height; i++) {
        // Print leading spaces
        for (int j = height - 1; j >= i; j--) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << "\n";
    }

    // Lower part of the diamond
    for (int i = height - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = i; j <= height - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}

