/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:47:03 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:47:04 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

    private:
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon(void);
        const std::string &getType();
        void setType(std::string newType);

};
























#endif