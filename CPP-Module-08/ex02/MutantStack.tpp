#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

// Constructors
template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& copy) :  std::stack<T>() {
    std::cout << "Copy Constructor called of MutantStack" << std::endl;
    *this = copy;
}

// Destructor
template<typename T>
MutantStack<T>::~MutantStack() {
//    std::cout << "Destructor called of MutantStack" << std::endl;
}

// Operators
template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& assign) {
    std::cout << "Assigment operator called of MutantStack" << std::endl;
    this->std::stack<T>::operator=(assign);
    return *this;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return this->c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
    return this->c.begin();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
    return this->c.end();
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
    return this->c.rbegin();
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
    return this->c.rend();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const {
    return this->c.rbegin();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const {
    return this->c.rend();
}

#endif
