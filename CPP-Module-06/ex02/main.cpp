#include "Base.hpp"
#include "B.hpp"
#include "C.hpp"
#include "A.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

#define C_CLEAR     "\033[0m"
#define C_GREEN     "\033[0;32m"

Base * generate(void) {
    srand(time(NULL));
    int randomNumber = rand() % 3;
    std::cout << randomNumber << std::endl;
    switch (randomNumber) {
        case 1:
            std::cout << C_GREEN << "An instance of Class A has been created" << C_CLEAR << std::endl;
            return new B;
        case 2:
            return new C;
        default:
            return new A;
    }
}

void identify(Base* p) {

}

void identify(Base& p) {

}

int main() {

    Base *base = generate();

    identify(base);
    identify(*base);


    delete base;
    return 0;
}
