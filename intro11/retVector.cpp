#include <iostream>
#include <vector>

std::vector<int> generate() // return by value
{
    return std::vector<int> { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
}

int main()
{
    std::vector v { generate() }; // the contents of the returned vector will be transferred into v

    for (auto e: v)
        std::cout << e << ' ';
    std::cout << '\n';

    return 0;
}