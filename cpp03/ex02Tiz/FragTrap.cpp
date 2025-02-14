#include "FragTrap.hpp"

FragTrap::FragTrap(){

}

FragTrap::~FragTrap(){
    std::cout << "FragTrap: " << this->_name << " destryed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy){

    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
}

FragTrap::FragTrap(std::string x):  _name(x), _hitPoints(100), _energyPoints(100), _attackDamage(30), ClapTrap(x){
    std::cout << "A new FragTrap: " << this->_name << " is created!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy){
   
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
        return (*this);
}

void FragTrap::highFivesGuys(void){
    
    std::string text;

    std::cout << "Give me an Positive HighFive!!" << std::endl;
    std::cout << "Answer(YES/NO): ";
    std::cin >> text;
    if (text == "YES")
        std::cout << "Lets gooo!!" << std::endl;
    else if (text == "NO")
        std::cout << "Ohhhh noooo!!" << std::endl;
    else
        std::cout << "Wrong input" << std::endl;
}

