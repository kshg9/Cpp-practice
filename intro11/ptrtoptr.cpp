#include <iostream>
// # Examples:
int main(){
    int x { 7 }; // non-constant
    int (*array)[5] { new int[x][5] }; // rightmost dimension must be constexpr
    auto array { new int[x][5] }; // so much simpler!

    int** array { new int*[10] }; // allocate an array of 10 int pointers — these are our rows
    for (int count { 0 }; count < 10; ++count)
        array[count] = new int[5]; // these are our columns
    

    //alloc dealloc eg 2

    int** array { new int*[10] }; // allocate an array of 10 int pointers — these are our rows
    for (int count { 0 }; count < 10; ++count)
        array[count] = new int[count+1]; // these are our columns
    
    for (int count { 0 }; count < 10; ++count)
    delete[] array[count];
        delete[] array; // this needs to be done last

    // eg 3

    // Instead of this:
    int** array { new int*[10] }; // allocate an array of 10 int pointers — these are our rows
    for (int count { 0 }; count < 10; ++count)
        array[count] = new int[5]; // these are our columns

    // Do this
    int *array { new int[50] }; // a 10x5 array flattened into a single array

    int*** ptrx3; //possible
}