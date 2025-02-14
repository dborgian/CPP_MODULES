#include "ScalarConverter.hpp"

int main(int argc, char **argv){

    std::string arg = argv[1];
    if (argc != 2)
    {
        std::cerr << "Wrong argouments" << std::endl;
        return 1;
    }
    ScalarConverter::convert(arg);
}