/*
    Problem Statement:
    Demonstrate proper initialization of a reference in C++.

    File Name: 008_reference_initialization.cpp

    How to Compile:
        g++ 008_reference_initialization.cpp -o reference_init

    How to Execute:
        ./reference_init

    Concepts Used:
    - Reference must be initialized at declaration
    - Cannot be null
*/

#include <iostream>
using namespace std;

int main() {
    int x = 100;
    int &r = x; // must initialize at declaration

    cout << "Value of x: " << x << endl;
    cout << "Value through reference r: " << r << endl;

    return 0;
}
