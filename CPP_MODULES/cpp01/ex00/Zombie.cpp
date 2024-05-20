/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:43:16 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:43:17 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



Zombie::Zombie(std::string const name) {

    this->_name = name;
    std::cout << "Zombie \"" << _name << "\" created" << std::endl;
}

Zombie::~Zombie(){

    std::cout << "Zombie " << _name << " destroyed" << std::endl;
}

void Zombie::announce() const{

    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie  *NewZombie(std::string name){ //heap

    Zombie *newZombie = new Zombie(name);
    return newZombie;
}

void randomChump(std::string name){
    Zombie zombie(name);
    zombie.announce();
}