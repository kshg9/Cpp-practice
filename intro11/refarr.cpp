#include <array>
#include <iostream>

void printLength(const std::array<double, 5>& myArray)
{
    std::cout << "length: " << myArray.size() << '\n';
}

int main()
{
    std::array myArray { 9.0, 7.2, 5.4, 3.6, 1.8 };

    printLength(myArray);

    return 0;
}

/*

// This works as expected
std::array<House, 3> houses { // initializer for houses
    { // extra set of braces to initialize the C-style array member inside the std::array struct
        { 13, 4, 30 }, // initializer for array element 0
        { 14, 3, 10 }, // initializer for array element 1
        { 15, 3, 40 }, // initializer for array element 2
     }
};

std::vector a { 1, 2, 3 }; // allocate 3 elements with values 1, 2, and 3
std::vector b { 3 }; // allocate 1 element with value 3
std::vector<int> c ( 3 ); // allocate 3 elements with values 0, 0, and 0
std::vector<int> d ( 3, 4 ); // allocate 3 elements with values 4, 4, and 4

*/