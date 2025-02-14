#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->_type = "wronganimal";
    std::cout << "WrongAnimal " << this->_type << " is created!" << std::endl;

}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal " << this->_type << " is destroyed!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type){
    this->_type = type;
    std::cout << "WrongAnimal " << this->_type << " is created!" << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal&copy) {
    if (this != &copy)
        this->_type = copy._type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal&copy){
    this->_type = copy._type;
    return (*this);
}

std::string WrongAnimal::getType() const{
    return(this->_type);
}

void WrongAnimal::makeSound() const{
    
}