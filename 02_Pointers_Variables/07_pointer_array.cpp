#include <iostream>
using namespace std;

int main(){

    int arr[] = {10, 20, 30};    
    int *arr_ptr = arr;

    cout << arr << endl;        // print address of first element 

    cout << arr[0] << endl;     // Print value of elements
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    cout << arr_ptr << endl;    // print address of first element 

    cout << arr_ptr[0] << endl;     // Print value of elements
    cout << arr_ptr[1] << endl;
    cout << arr_ptr[2] << endl;

    cout << *arr << endl;       // Print value of first element
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;

    cout << *arr_ptr << endl;       // Print value of first element
    cout << *(arr_ptr+1) << endl;
    cout << *(arr_ptr+2) << endl;
    return 0;
}
