#include "MutantStack.hpp"

// Constructors
MutantStack::MutantStack() {
    std::cout << "Default Constructor called of MutantStack" << std::endl;
}

MutantStack::MutantStack(const MutantStack& copy) {
    std::cout << "Copy Constructor called of MutantStack" << std::endl;
}

// Destructor
MutantStack::~MutantStack() {
    std::cout << "Destructor called of MutantStack" << std::endl;
}

// Operators
MutantStack& MutantStack::operator=(const MutantStack& assign) {
    std::cout << "Assigment operator called of MutantStack" << std::endl;
    return *this;
}

// Getters / Setters

//Member functions
