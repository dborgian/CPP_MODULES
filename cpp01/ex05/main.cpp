#include "Harl.hpp"

int main()
{
	Harl test;
	std::string input;

	std::cout << "What message do you want? " << std::endl;
	std::cin >> input;
	test.complain(input);
	return (0);
}