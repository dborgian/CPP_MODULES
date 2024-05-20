/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:57:58 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:57:59 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{

        private:
            std::string _name;
            int         _hitPoints;
            int         _energyPoints;
            int         _attackDamage;
        public:
            FragTrap();
            FragTrap(const FragTrap &copy);
            
};











#endif