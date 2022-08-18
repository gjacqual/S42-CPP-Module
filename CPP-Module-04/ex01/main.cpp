#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

#define AMOUNT 10

int main() {
    std::cout << "\033[1;96m<<<<<--- Base Subject Test "
              << COLOR_CLEAR << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << COLOR_YELLOW << "<Destructors order> "
              << COLOR_CLEAR << std::endl;
    delete j; //should not create a leak
    delete i;
    std::cout << "\033[1;96m<<<<<--- End of Base Test "
              << COLOR_CLEAR << std::endl;
    std::cout << std::endl;
    std::cout << "\033[1;96m<<<<<--- Animal  objects Array Test "
              << COLOR_CLEAR << std::endl;
    //create animals objects. Half of them will be Dogs, others will be Cats
    std::cout << COLOR_YELLOW << "<Create animals > "
              << COLOR_CLEAR << std::endl;
    Animal *animals[AMOUNT];
    for (int i = 0; i < AMOUNT; i++) {
        if (i%2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    // We conduct a roll call of animals
    std::cout << COLOR_YELLOW << "<Animals roll call>"
              << COLOR_CLEAR << std::endl;
    for (int i = 0; i < AMOUNT; i++) {
       std::cout << COLOR_BLUE << animals[i]->getType() << COLOR_CLEAR << " -> ";
       animals[i]->makeSound();
    }
    std::cout << COLOR_YELLOW << "<Destructors of Animals call>"
              << COLOR_CLEAR << std::endl;
    // should not create a leak
    for (int i = 0; i < AMOUNT; i++) {
        delete animals[i];
    }
    std::cout << "\033[1;96m<<<<<--- End of Test "
              << COLOR_CLEAR << std::endl;
    std::cout << std::endl;

    std::cout << "\033[1;96m<<<<<--- Deep Copy Test 1: Dog copy"
              << COLOR_CLEAR << std::endl;
    Dog basicDog;
    for (int i = 0; i < 5; i++) {
        basicDog.setIdea(i, "in vino veritas");
    }
    std::cout << COLOR_YELLOW << "<basicDog ideas before>" << COLOR_CLEAR << std::endl;
    for (int i = 0; i < 100; i++) {
        std::cout << basicDog.getIdea(i) << " | ";
    }
    std::cout << std::endl;
    {
        Dog tmpDog = basicDog;
        for (int i = 0; i < 3; i++) {
            tmpDog.setIdea(i, "I WANT A BONE");
        }
        std::cout << COLOR_YELLOW << "<tmpDog ideas >" << COLOR_CLEAR << std::endl;
        for (int i = 0; i < 100; i++) {
            std::cout << tmpDog.getIdea(i) << " | ";
        }
        std::cout << std::endl;
    }
    std::cout << COLOR_YELLOW << "<basicDog ideas after>" << COLOR_CLEAR << std::endl;
    for (int i = 0; i < 100; i++) {
        std::cout << basicDog.getIdea(i) << " | ";
    }
    std::cout << std::endl;
    std::cout << "\033[1;96m<<<<<---End of Test "
              << COLOR_CLEAR << std::endl;
    std::cout << std::endl;

    std::cout << "\033[1;96m<<<<<--- Deep Copy Test 2: Cat copy"
              << COLOR_CLEAR << std::endl;
    Cat basicCat;
    for (int i = 0; i < 5; i++) {
        basicCat.setIdea(i, "in Cat food veritas");
    }
    std::cout << COLOR_YELLOW << "<basicCat ideas before>" << COLOR_CLEAR << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << basicCat.getIdea(i) << " | ";
    }
    std::cout << std::endl;
    {
        Cat tmpCat = basicCat;
        for (int i = 0; i < 3; i++) {
            tmpCat.setIdea(i, "I WANT FISH");
        }
        std::cout << COLOR_YELLOW << "<tmpCat ideas >" << COLOR_CLEAR << std::endl;
        for (int i = 0; i < 10; i++) {
            std::cout << tmpCat.getIdea(i) << " | ";
        }
        std::cout << std::endl;
    }
    std::cout << COLOR_YELLOW << "<basicCat ideas after>" << COLOR_CLEAR << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << basicCat.getIdea(i) << " | ";
    }
    std::cout << std::endl;
    std::cout << "\033[1;96m<<<<<---End of Test "
              << COLOR_CLEAR << std::endl;
    std::cout << std::endl;
    std::cout << "\033[1;96m<<<<<--- Deep Copy Test 3: Dog copy with assignation operator"
              << COLOR_CLEAR << std::endl;
    {
        Dog *dog1 = new Dog;
        Dog *dog2 = new Dog;

        *dog2 = *dog1;
        delete dog2;
        delete dog1;
    }
    std::cout << "\033[1;96m<<<<<---End of Test "
              << COLOR_CLEAR << std::endl;
    std::cout << std::endl;

    std::cout << "\033[1;96m<<<<<---Destructors for basicCat and basicDog in Stack"
              << COLOR_CLEAR << std::endl;
    std::cout << std::endl;
    return 0;
}