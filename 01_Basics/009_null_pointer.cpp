/*
    Problem Statement:
    Demonstrate usage of a null pointer in C++.

    File Name: 009_null_pointer.cpp

    How to Compile:
        g++ 009_null_pointer.cpp -o null_pointer

    How to Execute:
        ./null_pointer

    Concepts Used:
    - Null pointer (nullptr)
    - Checking if pointer is null before dereferencing
*/

#include <iostream>
using namespace std;

int main() {
    int *ptr = nullptr;

    if(ptr == nullptr){
        cout << "Pointer is null, cannot dereference." << endl;
    }

    int x = 200;
    ptr = &x;
    cout << "Pointer now points to value: " << *ptr << endl;

    return 0;
}
