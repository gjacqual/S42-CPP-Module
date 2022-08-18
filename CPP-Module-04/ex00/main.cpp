#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "\033[1;96m<<<<<--- Base Test "
              << COLOR_CLEAR << std::endl;
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    std::cout << std::endl;

    std::cout << "\033[1;96m<<<<<--- Wrong Animal and Cat Tests ( without  Virtual keyword)"
              << COLOR_CLEAR << std::endl;
    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();
    std::cout << wrongAnimal->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongAnimal->makeSound();
    wrongCat->makeSound();
    std::cout << std::endl;
    std::cout << "\033[1;96m<<<<<--- The WrongCat must output the WrongCat makeSouund()"
                 "when used as a wrongCat"
              << COLOR_CLEAR << std::endl;
    // inheritance_cast between WrongAnimal and WrongCat;
    const WrongCat wrongCat2 = dynamic_cast<const WrongCat &>(*wrongCat);
    std::cout << wrongCat2.getType() << " " << std::endl;
    wrongCat2.makeSound();

    delete wrongCat;
    delete wrongAnimal;


    return 0;
}