#include <iostream>

enum Pet
{
    cat, // assigned 0
    dog, // assigned 1
    pig, // assigned 2
    whale, // assigned 3
};

// Consider this magic for now
// We pass pet by reference so we can have the function modify its value
std::istream& operator>> (std::istream& in, Pet& pet)
{
    int input{};
    in >> input; // input an integer

    pet = static_cast<Pet>(input);
    return in;
}

int main()
{
    std::cout << "Enter a pet (0=cat, 1=dog, 2=pig, 3=whale): ";

    Pet pet{};
    std::cin >> pet; // input our pet using std::cin

    std::cout << pet << '\n'; // prove that it worked

    return 0;
}