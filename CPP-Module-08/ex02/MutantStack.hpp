#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    // Constructors
    MutantStack<T>();

    MutantStack<T>(const MutantStack& copy);

    // Destructor
    ~MutantStack<T>();

    // Operators
    MutantStack<T>& operator=(const MutantStack& assign);

    iterator begin();

    iterator end();

    const_iterator begin() const;

    const_iterator end() const;

    reverse_iterator rbegin();

    reverse_iterator rend();

    const_reverse_iterator rbegin() const;

    const_reverse_iterator rend() const;


};

# include "MutantStack.tpp"

#endif //EX02_MUTANTSTACK_HPP
