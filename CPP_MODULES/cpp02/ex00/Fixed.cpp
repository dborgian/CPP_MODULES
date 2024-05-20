/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:48:44 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:48:45 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->_fixedPointValue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy){
    _fixedPointValue = copy._fixedPointValue;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed&Fixed::operator=(const Fixed &copy){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        _fixedPointValue = copy._fixedPointValue;
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Default destructor called" << std::endl;
}

int Fixed::getRawBits(void)const{

    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(const int rawBits){
    this->_fixedPointValue = rawBits;
}




