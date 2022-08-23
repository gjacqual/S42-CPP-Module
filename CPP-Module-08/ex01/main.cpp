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
    return 0;
}
