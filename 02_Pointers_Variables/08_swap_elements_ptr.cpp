#include <iostream>
using namespace std;

void swapPointers(int* ptr1, int* ptr2) {
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}
int main(){

    int a = 20;
    int b = 40;

    cout << "Before Swap : " ;
    cout << "A = " << a << " B = "<< b << endl;

    int *a_ptr = &a;
    int *b_ptr = &b;

    swapPointers(a_ptr, b_ptr);
    cout << "After Swap : " ;
    cout << "A = " << a << " B = "<< b << endl;


}