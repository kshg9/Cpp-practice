#include <algorithm> // for std::max
#include <iostream>

class Foo
{
private:
    int m_x{};
    int m_y{};

public:
    Foo(int x, int y)
        : m_y{ std::max(x, y) }, m_x{ m_y } // issue on this line (as m_x is definded first in class it gets init first and then m_y is init)
    {
    }

    // Foo(int x, int y)
    // {
    //     m_x = x; // incorrect: this is an assignment, not an initialization
    //     m_y = y; // incorrect: this is an assignment, not an initialization
    // }

    void print()
    {
        std::cout << "Foo(" << m_x << ", " << m_y << ")\n";
    }
    void print()
    {
        std::cout << "Foo(" << m_x << ", " << m_y << ")\n";
    }
};

int main()
{
    Foo foo{ 6, 7 };
    foo.print();

    return 0;
}