// main.cpp
#include <iostream>
#include "Array.hpp"

int main() {
    try {
        // Test default constructor
        Array<int> arr1;
        std::cout << "Size of arr1: " << arr1.size() << std::endl;

        // Test constructor with size
        unsigned int size = 5;
        Array<int> arr2(size);
        std::cout << "Size of arr2: " << arr2.size() << std::endl;

        // Test subscript operator and assignment
        for (unsigned int i = 0; i < size; ++i) {
            arr2[4] = i;
        }

        std::cout << "Contents of arr2: ";
        for (unsigned int i = 0; i < size; ++i) {
            std::cout << arr2[i] << " ";
        }
        std::cout << std::endl;
        // Test copy constructor
        Array<int> arr3(arr2);
        std::cout << "Contents of arr3 (copied from arr2): ";
        for (unsigned int i = 0; i < arr3.size(); ++i) {
            std::cout << arr3[i] << " ";
        }
        std::cout << std::endl;

        // Test assignment operator
        Array<int> arr4;
        arr4 = arr2;
        std::cout << "Contents of arr4 (assigned from arr2): ";
        for (unsigned int i = 0; i < arr4.size(); ++i) {
            std::cout << arr4[i] << " ";
        }
        std::cout << std::endl;

        // Test out of bounds exception
        //try {
        //    std::cout << arr2[size] << std::endl;
        //} catch (const std::out_of_range& e) {
        //    std::cout << "Exception caught: " << e.what() << std::endl;
        //}
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
}

    return 0;
}
