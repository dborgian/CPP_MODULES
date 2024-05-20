/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:56:51 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:56:52 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){

}

ScavTrap::~ScavTrap()  {
    std::cout << "ScavTrap: " << this->_name << " destructor has been called" << std::endl;
   
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    
    std::cout << "ScavTrap: " << this->_name << " costructor has been called" << std::endl;    
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy){
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy){
    
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
        return *this;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap: " << this->_name << " just entered gate keeper mode!" << std::endl;
}