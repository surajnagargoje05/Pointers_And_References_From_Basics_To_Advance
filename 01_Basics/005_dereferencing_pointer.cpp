/*
    Problem Statement:
    Demonstrate how to dereference a pointer to access the value it points to.

    File Name: 005_dereferencing_pointer.cpp

    How to Compile:
        g++ 005_dereferencing_pointer.cpp -o dereference_pointer

    How to Execute:
        ./dereference_pointer

    Concepts Used:
    - Pointer declaration and initialization
    - Dereferencing operator *
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    cout << "Address stored in p: " << p << endl;
    cout << "Value pointed by p: " << *p << endl;

    *p = 20; // modifying value via pointer
    cout << "Value of a after modification: " << a << endl;

    return 0;
}
