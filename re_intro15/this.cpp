#include <iostream>

class Simple
{
private:
    int m_id{};

public:
    Simple(int id)
        : m_id{ id }
    {
    }

    int getID() { return m_id; }
    void setID(int id) { m_id = id; }

    void print() { std::cout << this->m_id; } // use `this` pointer to access the implicit object and operator-> to select member m_id
    void print1() { std::cout << m_id; }       // implicit use of this
    void print2() { std::cout << (*this).m_id; } // explicit use of this
};

int main()
{
    Simple simple{ 1 };
    simple.setID(2);

    simple.print();

    return 0;
}