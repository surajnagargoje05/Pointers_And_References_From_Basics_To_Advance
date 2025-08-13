/*
    Problem Statement:
    Demonstrate the size of a reference variable.

    File Name: 012_size_of_reference.cpp

    How to Compile:
        g++ 012_size_of_reference.cpp -o size_reference

    How to Execute:
        ./size_reference

    Concepts Used:
    - References are aliases to variables
    - sizeof(reference) usually equals sizeof(original variable)

    Explanation:
    1. A reference in C++ is an alias for an existing variable.
       - It does not have its own memory like a pointer.
       - Any operation on the reference affects the original variable.
    2. Internally, the compiler may implement a reference as a hidden pointer.
       - But this is an implementation detail.
    3. When you use sizeof(reference), it usually returns the size of the original variable's type.
       - Example: 
           int a = 10;
           int &r = a;
           sizeof(r) == sizeof(a)  // both are 4 bytes on most systems
    4. Unlike pointers, references cannot be null or reassigned.
    5. The type of reference determines the size reported by sizeof, not the system architecture.
       - sizeof(int&) == sizeof(int)
       - sizeof(double&) == sizeof(double)
       - sizeof(char&) == sizeof(char)
    6. Summary:
       - Pointers store addresses → sizeof(pointer) depends on system.
       - References are aliases → sizeof(reference) depends on the original type.
*/


#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = 20.5;
    char c = 'A';
    float f = 3.14f;
    long l = 1000;
    bool flag = true;

    int &r_int = a;
    double &r_double = b;
    char &r_char = c;
    float &r_float = f;
    long &r_long = l;
    bool &r_bool = flag;

    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of int reference: " << sizeof(r_int) << " bytes" << endl;

    cout << "Size of double: " << sizeof(b) << " bytes" << endl;
    cout << "Size of double reference: " << sizeof(r_double) << " bytes" << endl;

    cout << "Size of char: " << sizeof(c) << " bytes" << endl;
    cout << "Size of char reference: " << sizeof(r_char) << " bytes" << endl;

    cout << "Size of float: " << sizeof(f) << " bytes" << endl;
    cout << "Size of float reference: " << sizeof(r_float) << " bytes" << endl;

    cout << "Size of long: " << sizeof(l) << " bytes" << endl;
    cout << "Size of long reference: " << sizeof(r_long) << " bytes" << endl;

    cout << "Size of bool: " << sizeof(flag) << " bytes" << endl;
    cout << "Size of bool reference: " << sizeof(r_bool) << " bytes" << endl;

    return 0;
}
