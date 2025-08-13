/*
    Problem Statement:
    Demonstrate the difference between a const pointer and a pointer to const.

    File Name: 06_const_pointer_vs_pointer_to_const.cpp

    How to Compile:
        g++ 06_const_pointer_vs_pointer_to_const.cpp -o const_pointer_demo

    How to Execute:
        ./const_pointer_demo

    Concepts Used:
    - const pointer: The address stored in the pointer cannot change.
    - pointer to const: The value pointed to cannot change via the pointer.
    - const pointer to const: Both the address and value are constant.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    // Pointer to const int
    const int* ptrToConst = &a;
    // *ptrToConst = 20; // ❌ Cannot change value
    ptrToConst = &b;     // ✅ Can change address

    // Const pointer to int
    int* const constPtr = &a;
    *constPtr = 30;      // ✅ Can change value
    // constPtr = &b;    // ❌ Cannot change address

    // Const pointer to const int
    const int* const constPtrToConst = &b;
    // *constPtrToConst = 40; // ❌ Cannot change value
    // constPtrToConst = &a; // ❌ Cannot change address

    cout << "ptrToConst points to: " << *ptrToConst << endl;
    cout << "constPtr points to: " << *constPtr << endl;
    cout << "constPtrToConst points to: " << *constPtrToConst << endl;

    const int *ptr = &a;
    ptr = &b;

    int *const ptr1 = &a;
    *ptr1 = 30;

    return 0;
}
