/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:58:28 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 16:58:29 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
     private:
        std::string _type;
    public:
        Dog();
        ~Dog();
        Dog(const Dog&copy);
        Dog &operator=(const Dog&copy);
        void makeSound();
};

#endif