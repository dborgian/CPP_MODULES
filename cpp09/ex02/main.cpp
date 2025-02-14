#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "PmergeMe.hpp"
#include <sstream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Error: No input numbers provided." << std::endl;
        return 1;
    }

    PmergeMe pmergeMe;


   for (int i = 1; i < argc; ++i) {
		int num;
		std::istringstream ss(argv[i]);
		if (!(ss >> num) || num < 0) {
			std::cerr << "Error: Invalid input. Only positive integers are allowed." << std::endl;
			return 1;
		}
		pmergeMe.vectorNumbers.push_back(num);
		pmergeMe.listNumbers.push_back(num);
	}
		

	std::cout << "Before: ";
   for (size_t i = 0; i < pmergeMe.vectorNumbers.size(); ++i) {
    	int num = pmergeMe.vectorNumbers[i];
    	std::cout << num << " ";
	}
    std::cout << std::endl;
    pmergeMe.sortNumbers();
	std::cout << "After: ";
   for (size_t i = 0; i < pmergeMe.vectorNumbers.size(); ++i) {
    int num = pmergeMe.vectorNumbers[i];
    std::cout << num << " ";
}
    std::cout << std::endl;


    pmergeMe.printExecutionTime();

    return 0;
}
