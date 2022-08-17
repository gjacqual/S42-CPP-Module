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

    std::cout << "\033[1;96m<<<<<--- Wrong Cat Test "
              << COLOR_CLEAR << std::endl;
    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();
    std::cout << wrongAnimal->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongAnimal->makeSound();
    wrongCat->makeSound();
    delete wrongCat;
    delete wrongAnimal;


    return 0;
}