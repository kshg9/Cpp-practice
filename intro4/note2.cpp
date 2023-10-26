// evaluates at compile time because of constexpr

#include <iostream>

int main()
{
    constexpr int x{ 5 };
    constexpr int y{ 6 };

    std::cout << (x > y ? x : y) << " is greater!\n";

    return 0;
}