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
            ~FragTrap();
            FragTrap(std::string name);
            FragTrap(const FragTrap &copy);
            FragTrap &operator=(const FragTrap &copy);
            void highFivesGuys(void);     
};











#endif