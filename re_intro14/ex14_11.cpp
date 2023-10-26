#include <string_view>
#include <iostream>

class Ball
{
private:
    std::string_view m_color={"black"};
    double m_radius{10.0};
public:
    // Ball(std::string_view color, double radius)
    // :m_color{color},m_radius{radius}
    // {
    //     print();
    // }
    // Balcolor{"Black"},m_l(double radius)
    // :m_radius{radius}
    // {
    //     print();
    // }
    // Ball(std::string_view color)
    // :m_color{color},m_radius{10.0}
    // {
    //     print();
    // }
    // Ball()
    // :m_color{"Black"},m_radius{10.0}
    // {
    //     print();
    // }
    // void print(){
    //     std::cout<<"Ball("<<m_color<<", "<<m_radius<<")";
    // }

    Ball(double radius)
    :Ball{"black",radius}
    {
    }
    Ball(std::string_view color="black", double radius=10.0)
		: m_color{ color }
		, m_radius{ radius }
	{
		std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
	}
};

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}