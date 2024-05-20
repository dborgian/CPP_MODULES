/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:46:46 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/16 12:19:40 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->_name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->_name << " destroyed" << std::endl;
}

void HumanB::attack(){
    if (this->_weapon != NULL)
        std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;  
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}


