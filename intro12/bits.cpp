// h/t to reader Donlod for this solution
#include <iostream>

void printBinary(unsigned int n)
{
	if (n > 1) // we only recurse if n > 1, so this is our termination case for n == 0
	{
		printBinary(n / 2);
	}

	std::cout << n % 2;
}

void printBinary(int x)
{
        // Termination case
	if (x == 0)
		return;

	// Recurse to the next bit
	printBinary(x / 2);

	// Print out the remainders (in reverse order)
	std::cout << x % 2;
}


int main()
{
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;

	printBinary(static_cast<unsigned int>(x));

    std::cout << "Enter a positive integer: ";
	std::cin >> x;

	printBinary(x);
}