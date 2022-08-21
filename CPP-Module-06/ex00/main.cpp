#include <iostream>
#include "ScalarConversion.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << C_RED << "Error: Invalid number of arguments"
                  << C_CLEAR << std::endl;
        std::cerr << C_YELLOW << "Usage: ./convert <VALUE>"
                  << C_CLEAR << std::endl;
        return 1;
    }
    ScalarConversion conversion(argv[1]);
    conversion.detectType();
    return 0;
}
