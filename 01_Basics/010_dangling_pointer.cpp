/*
    Problem Statement:
    Demonstrate what a dangling pointer is and why it is dangerous.

    File Name: 010_dangling_pointer.cpp

    How to Compile:
        g++ 010_dangling_pointer.cpp -o dangling_pointer

    How to Execute:
        ./dangling_pointer

    Concepts Used:
    - Dangling pointer occurs when memory is deleted but pointer still holds the address
    - Accessing it leads to undefined behavior
*/

#include <iostream>
using namespace std;

int main() {
    int *p = new int(5);
    cout << "Value of p: " << *p << endl;

    delete p; // memory freed, p is now dangling
    // cout << *p << endl; // unsafe, do not access dangling pointer

    p = nullptr; // safe practice
    cout << "Pointer reset to nullptr." << endl;

    return 0;
}
