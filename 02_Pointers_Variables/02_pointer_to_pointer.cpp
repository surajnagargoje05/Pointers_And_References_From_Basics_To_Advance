/*
    Problem Statement:
    Demonstrate a pointer to a pointer in C++.

    File Name: 02_pointer_to_pointer.cpp

    How to Compile:
        g++ 02_pointer_to_pointer.cpp -o pointer_to_pointer

    How to Execute:
        ./pointer_to_pointer

    Concepts Used:
    - Pointer to pointer: A variable that stores the address of another pointer.
    - Dereferencing twice (**)
*/

#include <iostream>
using namespace std;

int main() {
    int x = 100;
    int* ptr = &x;      // Pointer to int
    int** ptr2 = &ptr;  // Pointer to a pointer to int

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;

    cout << "ptr (address of x): " << ptr << endl;
    cout << "*ptr (value at address): " << *ptr << endl;

    cout << "ptr2 (address of ptr): " << ptr2 << endl;
    cout << "*ptr2 (value stored in ptr): " << *ptr2 << endl;
    cout << "**ptr2 (value of x): " << **ptr2 << endl;

    return 0;
}
