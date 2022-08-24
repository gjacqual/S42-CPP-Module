#include <iostream>
#include <list>
#include "MutantStack.hpp"

#define C_CLEAR     "\033[0m"
#define C_GREEN     "\033[0;32m"
#define C_YELLOW    "\033[0;33m"


int main() {

    // **************************** Test 1 ***********************************//
    std::cout << C_GREEN << "<<<-Test 1: Subject example ->>>"
              << C_CLEAR << std::endl;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;

    // **************************** Test 2 ***********************************//
    std::cout << C_GREEN << "<<<-Test 2: compare MutantStack VS std::list ->>>"
              << C_CLEAR << std::endl;
    {
//        MutantStack<int> mstack;
        std::list<int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << mstack.back() << std::endl;
        mstack.pop_back();
        std::cout << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        //[...]
        mstack.push_back(0);
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
        std::list<int> s(mstack);
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;

    // **************************** Test 3 ***********************************//
    std::cout << C_GREEN << "<<<-Test 3: reverse_iterators ->>>"
              << C_CLEAR << std::endl;
    {
        MutantStack<int> mstack;

        for (int i = 1; i <= 7; i++) {
            mstack.push(i);
        }
        std::cout << "top: " << mstack.top() << std::endl;
        std::cout << "size: " << mstack.size() << std::endl;
        std::cout << C_YELLOW << "<iterator>" << C_CLEAR << std::endl;
        MutantStack<int>::iterator it;
        for (it = mstack.begin(); it != mstack.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
        std::cout << C_YELLOW << "<reverse_iterator>" << C_CLEAR << std::endl;
        MutantStack<int>::reverse_iterator revIt;
        MutantStack<int>::reverse_iterator revIte = mstack.rend();

        for (revIt = mstack.rbegin(); revIt != revIte; revIt++) {
            std::cout << *revIt << " ";
        }
        std::cout << std::endl;
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // **************************** Test 4 ***********************************//
    std::cout << C_GREEN << "<<<-Test 4: Copy Constructor ->>>"
              << C_CLEAR << std::endl;
    {
        MutantStack<int> mstack;

        for (int i = 1; i <= 7; i++) {
            mstack.push(i);
        }
        std::cout << "top: " << mstack.top() << std::endl;
        std::cout << "size: " << mstack.size() << std::endl;
        std::cout << C_YELLOW << "<original before copy>"
                  << C_CLEAR << std::endl;
        std::cout << C_YELLOW << "<iterator>" << C_CLEAR << std::endl;
        MutantStack<int>::iterator it;
        for (it = mstack.begin(); it != mstack.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
        std::cout << C_YELLOW << "<copy>" << C_CLEAR << std::endl;
        {
            MutantStack<int> copyMstack(mstack);
            for (it = copyMstack.begin(); it != copyMstack.end(); it++) {
                std::cout << *it << " ";
            }
            std::cout << std::endl;
        }
        std::cout << C_YELLOW << "<original after>" << C_CLEAR << std::endl;
        for (it = mstack.begin(); it != mstack.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // **************************** Test 5 ***********************************//
    std::cout << C_GREEN << "<<<-Test 5: Copy std::stack ->>>"
              << C_CLEAR << std::endl;
    {
        MutantStack<int> mstack;


        for (int i = 1; i <= 7; i++) {
            mstack.push(i);
        }
        std::cout << "top: " << mstack.top() << std::endl;
        std::cout << "size: " << mstack.size() << std::endl;
        std::cout << C_YELLOW << "<original before copy>"
                  << C_CLEAR << std::endl;
        std::cout << C_YELLOW << "<iterator>" << C_CLEAR << std::endl;
        MutantStack<int>::iterator it;
        for (it = mstack.begin(); it != mstack.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
        std::cout << C_YELLOW << "<stack copy call top()>"
                  << C_CLEAR << std::endl;
        {
            std::stack<int> stack(mstack);
            while (!stack.empty()) {
                std::cout << stack.top() << " ";
                stack.pop();
            }
            std::cout << std::endl;
            std::cout << C_YELLOW "stack.size after delete: " << C_CLEAR
                      << stack.size() << std::endl;
        }
        std::cout << C_YELLOW << "<original after>" << C_CLEAR << std::endl;
        for (it = mstack.begin(); it != mstack.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;


    return 0;
}
