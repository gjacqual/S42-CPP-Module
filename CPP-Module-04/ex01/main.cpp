#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "\033[1;96m<<<<<--- Base Test "
              << COLOR_CLEAR << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; //should not create a leak
    delete i;


    std::cout << std::endl;
    return 0;
}