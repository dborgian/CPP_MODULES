#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* pippo = new WrongAnimal();
    const WrongAnimal* baudo = new WrongCat();


    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    pippo->makeSound();
    baudo->makeSound();

    delete meta;
    delete j;
    delete i;
    delete pippo;
    delete baudo;
}