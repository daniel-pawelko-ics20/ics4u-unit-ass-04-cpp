// Copyright 2022 Daniel
#include <iostream>

using namespace std;

void hourGlass(int stars, int empty) {
    // Base case
    if (stars != 0) {
        // Output string
        string out = "";

        // Adding empty spaces to the output string
        for (int count = 0; count < empty; count++) {
            out += " ";
        }

        // Adding starts to the output string
        for (int count = 0; count < stars; count++) {
            out += "* ";
        }

        // Printing and recursion
        cout << out << endl;
        hourGlass(stars - 1, empty + 1);
        cout << out << endl;
    }
}

int main() {
    try {
        // Input
        int inp;
        cout << "How wide would you like the hour glass to be: ";
        cin >> inp;

        // Calling function
        hourGlass(inp, 0);
    } catch (int exeption) {
        // Incase of error
        cout << "Invalid input, number must be greater than 1" << endl;
    }

    // Done
    cout << "\nDone." << endl;
}
