#include "Zombie.hpp"



Zombie::Zombie(std::string const name) {

    this->_name = name;
    std::cout << "Zombie \"" << _name << "\" created" << std::endl;
}

Zombie::~Zombie(){

    std::cout << "Zombie " << _name << " destroyed" << std::endl;
}

void Zombie::announce() const{

    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie  *NewZombie(std::string name){ //heap

    Zombie *newZombie = new Zombie(name);
    return newZombie;
}

void randomChump(std::string name){
    Zombie zombie(name);
    zombie.announce();
}