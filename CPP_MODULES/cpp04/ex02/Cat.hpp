/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:01:55 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 17:01:56 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        std::string _type;
        Brain *_attribute;
    public:
        Cat();
        ~Cat();
        Cat(const Cat&copy);
        Cat &operator=(const Cat&copy);
        std::string getType() const;
        Brain *getAttribute() const;
        void makeSound() const;
};

#endif