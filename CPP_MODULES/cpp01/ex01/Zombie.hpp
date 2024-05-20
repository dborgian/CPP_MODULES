/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:43:44 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:43:45 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie {

    private:
            std::string name;

    public:
            Zombie();
            ~Zombie();

            void announce() const;
            void setName(std::string name); 
        
};
Zombie *zombieHorde(int N, std::string name);



#endif