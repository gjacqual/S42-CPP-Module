#include <iostream>
#include "Span.hpp"

#define C_CLEAR     "\033[0m"
#define C_GREEN     "\033[0;32m"
#define C_YELLOW    "\033[0;33m"
#define C_RED       "\033[1;31m"


int main() {

    // **************************** Test 1 ***********************************//
    std::cout << C_GREEN << "<<<-Test 1: Subject example ->>>"
              << C_CLEAR << std::endl;
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // Expect output:
    //    $> ./ex01
    //    2
    //    14
    //    $>

    // **************************** Test 2 ***********************************//
    std::cout << C_GREEN << "<<<-Test 2: Span(10000);  ->>>"
              << C_CLEAR << std::endl;
    {
        Span spShort = Span(3);
        Span sp = Span(10000);
        std::cout << C_YELLOW << "<addNumber test():> "
                  << C_CLEAR;
        try {
            spShort.addNumber(98);
            spShort.addNumber(2);
            spShort.addNumber(0);
            // after next call will be exception ;
            spShort.addNumber(1);
        } catch (const std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }
        try {
            std::cout << "<shortestSpan():> " << spShort.shortestSpan() << std::endl;
            std::cout << "<longestSpan():> " << spShort.longestSpan() << std::endl;
        } catch (const std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }


        std::cout << C_YELLOW << "<Fail Test: only one element>"
                  << C_CLEAR << std::endl;
        std::cout << C_YELLOW << "<shortestSpan():> "
                  << C_CLEAR;
        try {
            sp.addNumber(3);
            std::cout << sp.shortestSpan() << std::endl;
        } catch (const std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }
        std::cout << C_YELLOW << "<longestSpan():> "
                  << C_CLEAR;
        try {
            std::cout << sp.longestSpan() << std::endl;
        } catch (const std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }
        std::cout << std::endl;
        std::cout << C_YELLOW << "<Success: >"
                  << C_CLEAR << std::endl;
        std::cout << C_YELLOW << "<shortestSpan():> "
                  << C_CLEAR;
        try {
            sp.addNumber(9999);
            sp.addNumber(1);
            sp.addNumber(8888);
            sp.addNumber(2);
            sp.addNumber(78);
            sp.addNumber(456);
            sp.addNumber(34);
            sp.addNumber(42);
            std::cout << sp.shortestSpan() << std::endl;
        } catch (const std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }
        std::cout << C_YELLOW << "<longestSpan():> "
                  << C_CLEAR;
        try {
            std::cout << sp.longestSpan() << std::endl;
        } catch (const std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }

    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // **************************** Test 3 ***********************************//
    std::cout << C_GREEN << "<<<-Test 3: addRange  ->>>"
              << C_CLEAR << std::endl;
    {
        Span spShort = Span(1000);
        Span sp = Span(10000);
        std::vector<int> vector1;

        {
            std::cout << C_YELLOW << "<Fail Test:>"
                      << C_CLEAR << std::endl;
            try {
                for (int i = 0; i < 10000; i++) {
                    vector1.push_back(i + (i * 3));
                }
                spShort.addRange(vector1.begin(), vector1.end());
                std::cout << spShort.shortestSpan() << std::endl;
                std::cout << spShort.longestSpan() << std::endl;
            } catch (const std::exception& e) {
                std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
            }
        }

        {
            std::cout << C_YELLOW << "<Success Test:>"
                      << C_CLEAR << std::endl;
            try {
                sp.addRange(vector1.begin(), vector1.end());
                std::cout << sp.shortestSpan() << std::endl;
                std::cout << sp.longestSpan() << std::endl;
            } catch (const std::exception& e) {
                std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
            }
        }

    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    return 0;
}
