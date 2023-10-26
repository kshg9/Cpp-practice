#include <iostream>
#include <string>
#include <string_view>

class Employee
{
	std::string m_name{};

public:
	void setName(std::string_view name) { m_name = name; }
	const std::string& getName() { return m_name; } //  getter returns by const reference
};

// createEmployee() returns an Employee by value (which means the returned value is an rvalue)
Employee createEmployee(std::string_view name)
{
	Employee e;
	e.setName(name);
	return e;
}

int main()
{
	std::cout << createEmployee("Frank").getName(); // okay, reference used in same expression

	const std::string& ref = createEmployee("Garbo").getName(); // reference becomes dangling when return value of getEmployee() is destroyed
	std::cout << ref; // undefined behavior

	return 0;
}