#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed b;
    a = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    return 0;
}