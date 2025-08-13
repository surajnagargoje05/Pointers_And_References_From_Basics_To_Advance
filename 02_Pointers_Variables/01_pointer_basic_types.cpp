/*
    Problem Statement:
    Demonstrate the basic types of pointers in C++ and how they store the address of variables.

    File Name: 01_pointer_basic_types.cpp

    How to Compile:
        g++ 01_pointer_basic_types.cpp -o pointer_basic_types

    How to Execute:
        ./pointer_basic_types

    Concepts Used:
    - Pointer: Variable that stores the address of another variable.
    - Address-of operator (&) to get the address.
    - Dereferencing operator (*) to access the value at the address.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 42;
    double b = 3.14;

    int* intPtr = &a;       // Pointer to int
    double* doublePtr = &b; // Pointer to double

    cout << "Value of a: " << a << ", Address: " << &a << endl;
    cout << "Value of b: " << b << ", Address: " << &b << endl;

    cout << "Pointer intPtr points to address: " << intPtr
         << " with value: " << *intPtr << endl;

    cout << "Pointer doublePtr points to address: " << doublePtr
         << " with value: " << *doublePtr << endl;

    return 0;
}
