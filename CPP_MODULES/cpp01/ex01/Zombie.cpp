/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:43:42 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:43:43 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){

}

Zombie::~Zombie(){

    std::cout << "Zombie " << name << " destroyed" << std::endl;
}

void Zombie::announce() const{

    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


void Zombie::setName(std::string name){
    this->name = name;
}

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; ++i)
        horde[i].setName(name);
    return horde;
}

