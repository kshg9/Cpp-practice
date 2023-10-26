#include <iostream>

int main()
{
    int x{ 0xF }; // 0x before the number means this is hexadecimal
    int y{ 012 }; // 0 before the number means this is octal
    std::cout << x <<" "<< y << '\n';
    return 0;
}