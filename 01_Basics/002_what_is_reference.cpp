/*
    Problem Statement:
    Demonstrate what a reference is and how to use it in C++.

    File Name: 002_what_is_reference.cpp

    How to Compile:
        g++ 002_what_is_reference.cpp -o reference_demo

    How to Execute:
        ./reference_demo

    Concepts Used:
    - Reference: An alias for an existing variable.
    - Must be initialized during declaration.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &ref = a; // reference to a

    cout << "Value of a: " << a << endl;
    cout << "Value through reference ref: " << ref << endl;

    ref = 20; // modifying through reference
    cout << "Value of a after modifying ref: " << a << endl;

    return 0;
}
