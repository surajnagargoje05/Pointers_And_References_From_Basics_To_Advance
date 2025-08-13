/*
    Problem Statement:
    Write a C++ program to reverse an array of integers using pointers.
    Do not use array indexing ([]). Only pointer arithmetic is allowed.
    The program should print the array before and after reversing.

    File Name: 014_reverse_array_using_pointer.cpp

    How to Compile:
        g++ 014_reverse_array_using_pointer.cpp -o reverse_pointer

    How to Execute:
        ./reverse_pointer

    Concepts Tested:
    - Pointers and pointer arithmetic
    - Array traversal
    - Dynamic memory allocation (optional)
*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array: ";
    // Print array using pointer logic
    for(int i = 0; i <= n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;

    // Reverse array using pointers
    int *start = &arr[0];
    int *end = &arr[n];
    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    cout << "Reversed array: ";
    // Print reversed array using pointer logic
    for(int i = 0; i <= n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
}