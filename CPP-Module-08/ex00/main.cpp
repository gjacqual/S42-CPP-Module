#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include "easyfind.hpp"

#define C_CLEAR     "\033[0m"
#define C_GREEN     "\033[0;32m"
#define C_YELLOW    "\033[0;33m"
#define C_RED       "\033[1;31m"


int main() {

    // **************************** Test 1 ***********************************//
    std::cout << C_GREEN << "<<<-Test 1: vector<int> ->>>"
              << C_CLEAR << std::endl;
    {
        std::vector<int> vector;

        vector.reserve(5);
        for (int i = 0; i < 5; i++) {
            vector.push_back(i + 1);
        }
        std::cout << C_YELLOW << "vector = " << C_CLEAR << "{ ";
        for (int i = 0; i < 5; i++) {
            std::cout << vector[i] << " ";
        }
        std::cout << "}" << std::endl;
        std::cout << C_YELLOW << "<easyfind(vector, 3)> " << C_CLEAR;
        try {
            std::cout << *easyfind(vector, 3) << std::endl;
        } catch (std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }
        std::cout << C_YELLOW << "<easyfind(vector, 6)> " << C_CLEAR;
        try {
            std::cout << *easyfind(vector, 6) << std::endl;
        } catch (std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // **************************** Test 2 ***********************************//
    std::cout << C_GREEN << "<<<-Test 2: list<int> ->>>"
              << C_CLEAR << std::endl;
    {
        std::list<int> list;


        for (int i = 0; i < 4; i++) {
            list.push_back(i + 1);
            list.push_front(i - 3);
            list.push_back(i + 35);
        }

        std::cout << C_YELLOW << "list = " << C_CLEAR << "{ ";
        std::list<int>::iterator it;
        for (it = list.begin(); it != list.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << "}" << std::endl;
        std::cout << C_YELLOW << "<easyfind(list, 36)> " << C_CLEAR;
        try {
            std::cout << *easyfind(list, 36) << std::endl;
        } catch (std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }
        std::cout << C_YELLOW << "<easyfind(list, 6)> " << C_CLEAR;
        try {
            std::cout << *easyfind(list, 6) << std::endl;
        } catch (std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // **************************** Test 3 ***********************************//
    std::cout << C_GREEN << "<<<-Test 3: deque<int> ->>>"
              << C_CLEAR << std::endl;
    {
        std::deque<int> deque;


        for (int i = 0; i < 4; i++) {
            deque.push_back(i + 1);
            deque.push_front(i - 34);
            deque.push_back(i + 5);
        }

        std::cout << C_YELLOW << "deque = " << C_CLEAR << "{ ";
        std::deque<int>::iterator it;
        for (it = deque.begin(); it != deque.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << "}" << std::endl;
        std::cout << C_YELLOW << "<easyfind(deque, 5)> " << C_CLEAR;
        try {
            std::cout << *easyfind(deque, 5) << std::endl;
        } catch (std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }
        std::cout << C_YELLOW << "<easyfind(deque, -1)> " << C_CLEAR;
        try {
            std::cout << *easyfind(deque, -1) << std::endl;
        } catch (std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // **************************** Test 4 ***********************************//
    std::cout << C_GREEN << "<<<-Test 4: set<int> ->>>"
              << C_CLEAR << std::endl;
    {
        std::set<int> set;

        for (int i = 0; i < 5; i++) {
            set.insert(i + 12);
        }

        std::cout << C_YELLOW << "set = " << C_CLEAR << "{ ";
        std::set<int>::iterator it;
        for (it = set.begin(); it != set.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << "}" << std::endl;
        std::cout << C_YELLOW << "<easyfind(set, 13)> " << C_CLEAR;
        try {
            std::cout << *easyfind(set, 13) << std::endl;
        } catch (std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }
        std::cout << C_YELLOW << "<easyfind(set, 11)> " << C_CLEAR;
        try {
            std::cout << *easyfind(set, 11) << std::endl;
        } catch (std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    return 0;
}
