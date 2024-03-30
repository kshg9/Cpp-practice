#include <iostream>

class Accumulator
{
private:
    int m_value { 0 };

public:
    void add(int value) { m_value += value; }

    // Here is the friend declaration that makes non-member function void print(const Accumulator& accumulator) a friend of Accumulator
    friend void print(const Accumulator& accumulator); // Can also be declared inside the class
};

void print(const Accumulator& accumulator)
{
    std::cout << accumulator.m_value; // now its accessible
}

int main()
{
    Accumulator acc{};
    acc.add(5);
    print(acc);

    return 0;
}