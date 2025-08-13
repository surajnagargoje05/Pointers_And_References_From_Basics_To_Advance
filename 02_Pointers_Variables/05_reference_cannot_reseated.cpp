/*
    Problem Statement:
    Demonstrate that references cannot be reseated to refer to another variable.

    File Name: 05_reference_cannot_reseated.cpp

    How to Compile:
        g++ 05_reference_cannot_reseated.cpp -o reference_cannot_reseated

    How to Execute:
        ./reference_cannot_reseated

    Concepts Used:
    - Reference in C++ must be initialized when declared.
    - References cannot be changed to refer to another variable.
*/

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;

    int& ref = x; // Reference to x
    cout << "ref refers to x: " << ref << endl;

    // Attempting to reseat reference to another variable is not allowed.
    // ref = &y; // ❌ Compilation error if we try to bind it differently.

    ref = y; // ✅ This assigns value of y to x, not reseating.
    cout << "After ref = y, x becomes: " << x << endl;

    return 0;
}
