#include "Fixed.hpp"

Fixed::Fixed(): _valueFixedPoint(0)
{
    std::cout << "Default costructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy): _valueFixedPoint(copy._valueFixedPoint)
{
    std::cout << "Copy costructor called" << std::endl;
}

//Fixed &Fixed::operator = (const Fixed &copy){
//     std::cout << "Copy assignment operator called" << std::endl;
//     if (this != &copy)
//        _valueFixedPoint = copy._valueFixedPoint;
//    return *this;
//}

Fixed::~Fixed() { 
    std::cout << "Destructor called" << std::endl;  
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return _valueFixedPoint;
}

void Fixed::setRawBits(int const raw){

    _valueFixedPoint = raw;
}