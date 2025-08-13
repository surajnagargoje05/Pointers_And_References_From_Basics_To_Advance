/*
    Problem Statement:
    Demonstrate basic pointer syntax in C++.

    File Name: 003_pointer_syntax.cpp

    How to Compile:
        g++ 003_pointer_syntax.cpp -o pointer_syntax

    How to Execute:
        ./pointer_syntax

    Concepts Used:
    - Pointer declaration and initialization
    - Using & operator to get address
    - Using * operator to access value
*/

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *ptr = &x; // pointer declaration and initialization

    cout << "Address of x: " << &x << endl;
    cout << "Pointer ptr stores address: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    return 0;
}
