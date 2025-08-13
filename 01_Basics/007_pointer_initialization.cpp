/*
    Problem Statement:
    Demonstrate pointer initialization and assignment in C++.

    File Name: 007_pointer_initialization.cpp

    How to Compile:
        g++ 007_pointer_initialization.cpp -o pointer_init

    How to Execute:
        ./pointer_init

    Concepts Used:
    - Pointer initialization with nullptr
    - Assigning address later
*/

#include <iostream>
using namespace std;

int main() {
    int *p = nullptr; // pointer initialized to null
    int x = 50;
    p = &x;           // assign address of x

    cout << "Pointer points to address: " << p << endl;
    cout << "Value at pointer: " << *p << endl;

    return 0;
}
