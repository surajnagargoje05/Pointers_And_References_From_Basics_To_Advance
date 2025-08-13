/*
    Problem Statement:
    Show how pointers can be reassigned to point to different variables.

    File Name: 04_pointer_reassignment.cpp

    How to Compile:
        g++ 04_pointer_reassignment.cpp -o pointer_reassignment

    How to Execute:
        ./pointer_reassignment

    Concepts Used:
    - Pointer reassignment: Changing the address a pointer holds.
    - Dereferencing to access updated value.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    int* ptr = &a;
    cout << "Initially, ptr points to a: " << *ptr << endl;

    ptr = &b; // Reassign pointer
    cout << "After reassignment, ptr points to b: " << *ptr << endl;

    return 0;
}
