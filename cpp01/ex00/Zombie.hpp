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