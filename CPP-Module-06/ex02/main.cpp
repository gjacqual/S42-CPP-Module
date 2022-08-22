#include "Base.hpp"
#include "B.hpp"
#include "C.hpp"
#include "A.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

#define C_CLEAR     "\033[0m"
#define C_GREEN     "\033[0;32m"
#define C_YELLOW    "\033[0;33m"
#define C_BLUE      "\033[0;34m"
#define C_RED       "\033[1;31m"

Base *generate(void);

void identify(Base *p);

void identify(Base &p);

int main() {

    Base *base = generate();

    identify(base);
    identify(*base);

    delete base;
    {
        std::cout << C_GREEN << "<<<- Test: Wrong Class ->>>"
                  << C_CLEAR << std::endl;
        Base *base2 = new Base;
        identify(base2);
        identify(*base2);

        delete base2;
    }
    return 0;
}

Base *generate(void) {
    srand(time(NULL));
    int randomNumber = rand() % 3;
    switch (randomNumber) {
        case 1:
            std::cout << C_GREEN << "Instance of B Created"
                      << C_CLEAR << std::endl;
            return new B;
        case 2:
            std::cout << C_GREEN << "Instance of C Created"
                      << C_CLEAR << std::endl;
            return new C;
        default:
            std::cout << C_GREEN << "Instance of A Created"
                      << C_CLEAR << std::endl;
            return new A;
    }
}

void identify(Base *p) {
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    std::cout << C_BLUE << "The Type of the object pointed to by p: ";
    if (a) {
        std::cout << C_YELLOW << "A" << C_CLEAR << std::endl;
    } else if (b) {
        std::cout << C_YELLOW << "B" << C_CLEAR << std::endl;
    } else if (c) {
        std::cout << C_YELLOW << "C" << C_CLEAR << std::endl;
    } else {
        std::cout << C_RED << "Object not found" << C_CLEAR << std::endl;
    }
}

void identify(Base &p) {
    try {
        A &a = dynamic_cast<A &>(p);
        (void) a;
        std::cout << C_BLUE << "The Type of the object pointed to by p: ";
        std::cout << C_YELLOW << "A" << C_CLEAR << std::endl;
        return;
    } catch (std::exception &e) {}
    try {
        B &b = dynamic_cast<B &>(p);
        (void) b;
        std::cout << C_BLUE << "The Type of the object pointed to by p: ";
        std::cout << C_YELLOW << "B" << C_CLEAR << std::endl;
        return;
    } catch (std::exception &e) {}
    try {
        C &c = dynamic_cast<C &>(p);
        (void) c;
        std::cout << C_BLUE << "The Type of the object pointed to by p: ";
        std::cout << C_YELLOW << "C" << C_CLEAR << std::endl;
        return;
    } catch (std::exception &e) {
        std::cerr << C_RED << "Object not found (Exception: " << e.what() << ")"
                  << C_CLEAR << std::endl;
    }
}
