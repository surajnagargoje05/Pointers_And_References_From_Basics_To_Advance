/*
    Problem Statement:
    Demonstrate accessing and modifying a variable using a reference.

    File Name: 006_accessing_reference_value.cpp

    How to Compile:
        g++ 006_accessing_reference_value.cpp -o reference_value

    How to Execute:
        ./reference_value

    Concepts Used:
    - Reference as alias
    - Modifying original variable through reference
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &r = a;

    cout << "Original a: " << a << endl;
    r = 30; // modify through reference
    cout << "Value of a after modifying reference: " << a << endl;

    return 0;
}
