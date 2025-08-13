/*
    Problem Statement:
    Write a C++ program to swap the values of two integer variables using references.
    The program should demonstrate that after swapping, the original variables have their values exchanged.

    File Name: 013_swap_using_reference.cpp

    How to Compile:
        g++ 013_swap_using_reference.cpp -o swap_reference

    How to Execute:
        ./swap_reference

    Concepts Tested:
    - References
    - Basic variable manipulation
    - Function arguments by reference
*/

#include <iostream>
using namespace std;

void swapValues(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    // Call swap function
    swapValues(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
