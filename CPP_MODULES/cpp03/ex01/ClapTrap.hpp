/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:56:40 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:56:41 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRA_HPP

#include <iostream>

class ClapTrap{

        protected:
            std::string _name;
            int         _hitPoints;
            int         _energyPoints;
            int         _attackDamage;

        public:
            ClapTrap();
            ~ClapTrap();
            ClapTrap(std::string x);
            ClapTrap(const ClapTrap &copy);
            ClapTrap &operator=(const ClapTrap &copy);
            void attack(const std::string &target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);          

            void setHitpoints(unsigned int points);

};
















#endif