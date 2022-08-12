#include <iostream>
#include "Harl.hpp"

int main(void) {
    Harl harl;
    std::cout << "<<<-Try to Call Four member functions->>>" << std::endl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    std::cout << std::endl;

    std::cout << "<<<-Try to Call Another Type of Functions->>>" << std::endl;
    harl.complain("TROLOLO");
    harl.complain("debug");
    harl.complain("SHOUT");
    std::cout << std::endl;

    std::cout << "<<<-Try to Call member functions in different order->>>" << std::endl;
    harl.complain("ERROR");
    harl.complain("WARNING");
    harl.complain("INFO");
    harl.complain("DEBUG");
}
