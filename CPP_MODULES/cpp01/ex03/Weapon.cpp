/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:47:01 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:47:02 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){

}

Weapon::~Weapon(void){
}

const std::string &Weapon::getType()
{
    std::string &TypeRef = this->_type;
    return TypeRef;
}

void Weapon::setType(std::string NewType){

    this->_type = NewType;
}
