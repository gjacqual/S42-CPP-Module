#include "Harl.hpp"

void Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*call_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
                                 &Harl::error};
    for(int i = 0; i < 4; ++i) {
        if (level == levels[i]) {
            (this->*call_ptr[i])();
        }

    }

}

void Harl::debug(void) {
    std::cout << "\033[1;35m[DEBUG]: I love having extra bacon for my "
                 "7XL-double-cheese-triple-pickle-specialketchup\n"
                 "burger. I really do!\"\033[0m" << std::endl;
}

void Harl::info(void) {
    std::cout << "\033[1;36m[INFO]: cannot believe adding extra bacon costs "
                 "more money. You didn’t put\n"
                 "enough bacon in my burger! If you did, "
                 "I wouldn’t be asking for more!\"\033[0m" << std::endl;
}

void Harl::warning(void) {
    std::cout << "\033[1;33m[WARNING]: I think I deserve to have some extra "
                 "bacon for free. I’ve been coming for\n"
                 "years whereas you started working here since last month."
                 "\033[0m" << std::endl;
}

void Harl::error(void) {
    std::cout << "\033[1;31m[ERROR]: This is unacceptable! "
                << "I want to speak to the manager now.\033[0m" << std::endl;
}

Harl::Harl() {
    std::cout << "Harl is appear" << std::endl;
}

Harl::~Harl() {
    std::cout << "Harl disappeared" << std::endl;
}
