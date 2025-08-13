/*
    Problem Statement:
    Demonstrate how to check the size of a pointer variable.

    File Name: 011_size_of_pointer.cpp

    How to Compile:
        g++ 011_size_of_pointer.cpp -o size_pointer

    How to Execute:
        ./size_pointer

    Concepts Used:
    - sizeof operator
    - Pointer size varies depending on architecture (32-bit/64-bit)

    Explanation:
    1. Pointers store the memory address of a variable.
    2. The size of a pointer depends on the system architecture:
       - On a 32-bit system, a pointer uses 4 bytes (2^32 addresses can be represented).
       - On a 64-bit system, a pointer uses 8 bytes (2^64 addresses can be represented).
    3. The type of data the pointer points to (int, double, char) does NOT affect the size of the pointer itself.
       - sizeof(int*) == sizeof(double*) == sizeof(char*) on the same system.
    4. When we use sizeof(pointer), C++ returns the number of bytes required to store an address on the system.
    5. Example: On a 64-bit machine:
       - sizeof(int*) = 8 bytes
       - sizeof(double*) = 8 bytes
       - sizeof(char*) = 8 bytes
    6. The actual memory a pointer points to is determined by the type, but the pointer variable itself is always fixed in size.
*/


#include <iostream>
using namespace std;

int main() {
    int *p;
    double *dp;
    char *cp;

    int a;
    double b;
    char c;

    cout << "Size of int pointer: " << sizeof(p) << " bytes" << endl;
    cout << "Size of double pointer: " << sizeof(dp) << " bytes" << endl;
    cout << "Size of char pointer: " << sizeof(cp) << " bytes" << endl;

    cout << "Size of int pointer: " << sizeof(a) << " bytes" << endl;
    cout << "Size of double pointer: " << sizeof(b) << " bytes" << endl;
    cout << "Size of char pointer: " << sizeof(c) << " bytes" << endl;

    return 0;
}
