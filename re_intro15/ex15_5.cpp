#include <iostream>
#include <string>

template<typename T,typename U,typename V>
class Triad {
    private:
    T m_a; U m_b; V m_c;
    public:
    Triad(const T& first,const U& second, const V& third)
    :m_a{first}, m_b{second},m_c{third}
    {
    }
    void print() const {
        std::cout<<'['<<m_a<<", "<<m_b<<", "<<m_c<<']';
    }
};

int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}