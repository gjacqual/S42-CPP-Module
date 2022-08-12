#include "ReplaceContent.hpp"

int main(int argc, char **argv ) {
    if (argc != 4) {
        std::cout << "\033[1;31mError: invalid number of arguments\033[0m" << std::endl;
        std::cout << "Usage: ./replacer <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    if (filename.empty()) {
        std::cout << "\033[1;31mError: Empty filename\033[0m" << std::endl;
        std::cout << "Usage: ./replacer <filename> <string1> <string2>" << std::endl;
        return 1;
    }
    std::string s1 = argv[2];
    if (s1.empty()) {
        std::cout << "\033[1;31mError: Empty <string1> argument\033[0m" << std::endl;
        std::cout << "Usage: ./replacer <filename> <string1> <string2>" << std::endl;
        return 1;
    }
    std::string s2 = argv[3];

    ReplaceContent replaceContent(filename, s1, s2);
    replaceContent.replace();
    return 0;
}
