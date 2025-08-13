/*
    Problem Statement:
    Demonstrate basic reference syntax in C++.

    File Name: 004_reference_syntax.cpp

    How to Compile:
        g++ 004_reference_syntax.cpp -o reference_syntax

    How to Execute:
        ./reference_syntax

    Concepts Used:
    - Reference declaration
    - Initialization at declaration
    - Accessing and modifying original variable through reference
*/

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int &ref = x; // reference declaration

    cout << "Original value: " << x << endl;
    ref = 10; // modify via reference
    cout << "Value after modifying reference: " << x << endl;

    return 0;
}
