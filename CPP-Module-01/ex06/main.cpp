#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv) {

    if (argc != 2) {
        std::cout << "\033[1;31mError: invalid number of arguments\033[0m" << std::endl;
        std::cout << "Usage: ./harlFilter \"<LEVEL>\"" << std::endl;
        return 1;
    }
    std::string level = argv[1];
    Harl harl;

    harl.complain(level);

    return 0;
}
