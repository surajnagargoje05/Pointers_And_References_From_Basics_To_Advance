/*
    Problem Statement:
    Demonstrate what a pointer is and how to use it in C++.

    File Name: 001_what_is_pointer.cpp

    How to Compile:
        g++ 001_what_is_pointer.cpp -o pointer_demo

    How to Execute:
        ./pointer_demo

    Concepts Used:
    - Pointer: A variable that stores the memory address of another variable.
    - Address-of operator (&)
    - Dereferencing operator (*)
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p;      // Declare pointer
    p = &a;      // Assign address of a to pointer

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value stored in pointer p: " << p << endl;
    cout << "Value pointed by p: " << *p << endl;

    return 0;
}
