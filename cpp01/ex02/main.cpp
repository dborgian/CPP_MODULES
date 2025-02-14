#include <iostream>

int main(void)
{
    std::string string;
    std::string *stringPTR;

    string = "HI THIS IS BRAIN";
    stringPTR = &string;
    std::string &stringREF = string;
    std::cout << "string address: " << &string << std::endl;
    std::cout << "stringPTR address: " << stringPTR << std::endl;
    std::cout << "stringREF address: " << &stringREF << std::endl;
    std::cout << "string: " << string << std::endl;
    std::cout << "stringPTR string: " << *stringPTR << std::endl;
    std::cout << "stringREf string: " << stringREF << std::endl;
}