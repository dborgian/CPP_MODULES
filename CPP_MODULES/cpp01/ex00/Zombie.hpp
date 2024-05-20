/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:43:19 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:43:20 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie {

    private:
            std::string _name;

    public:
            
            Zombie(std::string const name);
            ~Zombie();
            void announce() const;
        
};
Zombie  *NewZombie(std::string name);
void    randomChump(std::string name);


#endif