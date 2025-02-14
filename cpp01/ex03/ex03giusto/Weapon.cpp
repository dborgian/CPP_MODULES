#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){

}

Weapon::~Weapon(void){
}

const std::string &Weapon::getType()
{
    std::string &TypeRef = this->_type;
    return TypeRef;
}

void Weapon::setType(std::string NewType){

    this->_type = NewType;
}
