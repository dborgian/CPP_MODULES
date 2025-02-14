#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(){

}

HumanB::HumanB(std::string name){
    this->_name = name;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->_name << " destroyed" << std::endl;
}

void HumanB::attack(){
    std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;  
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}


