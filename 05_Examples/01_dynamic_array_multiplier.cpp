
/******************************************************************************

Problem Statement:
------------------
Write a C++ program that demonstrates dynamic memory allocation and array manipulation.
The program should:

1. Dynamically allocate two integer arrays:
   - `arr1` of size 5 with values {1, 2, 3, 4, 5}
   - `arr2` of size 3 with values {10, 20, 30}

2. Implement a function `applyAll()` that:
   - Takes both arrays and their sizes as input.
   - Returns a new dynamically allocated array where each element is the product
     of every element in `arr2` with every element in `arr1`, in order.

   For example:
   result = {10×1, 10×2, ..., 10×5, 20×1, ..., 30×5}

3. Implement a function `printArr()` to print any array in the format:
   [ val1 val2 val3 ... ]

4. In `main()`:
   - Print both input arrays.
   - Call `applyAll()` and print the resulting array.

Note:
- Use dynamic memory allocation (`new` and `delete[]`) for all arrays.
- Ensure proper memory management to avoid memory leaks.

*******************************************************************************/

#include <iostream>
using namespace std;

void printArr(int *arr, const size_t arr_size){
    cout << " [ ";
    for(int i = 0; i < arr_size; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int *applyAll(int *arr1, const size_t arr1_size, int *arr2, const size_t arr2_size){
    int *resultArr = new int[arr1_size * arr2_size];
    int position = 0;
    for(int i = 0; i < arr2_size ; i++){
        for(int j = 0; j < arr1_size; j++){
            resultArr[position] = arr2[i] * arr1[j];
            position++;
        }
    }
    return resultArr;
}
int main()
{
    // std::cout<<"Hello World";
    const size_t arr1_size = 5;
    const size_t arr2_size = 3;
    
    int *arr1 = new int[arr1_size]{1, 2, 3, 4, 5};
    int *arr2 = new int[arr2_size]{10, 20, 30};
    
    printArr(arr1, arr1_size);
    printArr(arr2, arr2_size);
    
    int *result = applyAll(arr1, arr1_size, arr2, arr2_size);
    const size_t result_size = (arr1_size * arr2_size);
    printArr(result, result_size);
    return 0;
}
