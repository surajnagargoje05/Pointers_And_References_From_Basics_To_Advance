/*
    Problem Statement:
    Demonstrate the usage of a void pointer in C++.

    File Name: 03_void_pointer.cpp

    How to Compile:
        g++ 03_void_pointer.cpp -o void_pointer_demo

    How to Execute:
        ./void_pointer_demo

    Concepts Used:
    - Void pointer: A generic pointer that can store the address of any data type.
    - Type casting is required before dereferencing a void pointer.
*/

#include <iostream>
using namespace std;

int main(){
    int val = 10;
    int num = 20;

    void *ptr;      //Generic Pointer which can point to any datatype
    ptr = &val;

    cout << "Value of num using void pointer: " << *(int*)ptr << endl;

    ptr = &num;
    cout << "Value of num using void pointer: " <<*(int*)ptr << endl;

}