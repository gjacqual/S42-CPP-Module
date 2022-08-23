#include <iostream>
#include <string>
#include <cstdlib>
#include "Array.hpp"

#define C_CLEAR     "\033[0m"
#define C_RED       "\033[1;31m"
#define C_GREEN     "\033[0;32m"

#define MAX_VAL 750

int main(int, char**) {

    // **************************** Test 1 ***********************************//
    std::cout << C_GREEN << "<<<-Test1: Create Empty array->>>"
              << C_CLEAR << std::endl;
    {
        Array<int> arrayInt;
        try {
            arrayInt[0] = 10;
        } catch (std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }

    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // **************************** Test 2 ***********************************//
    std::cout << C_GREEN << "<<<-Test2: Create Array with specific size->>>"
              << C_CLEAR << std::endl;
    {
        Array<char> arrayChar(873);
        try {
            arrayChar[836] = 'a';
            std::cout << "A member function size() test: "
                      << C_GREEN << arrayChar.size() << C_CLEAR << std::endl;
        } catch (std::exception& e) {
            std::cerr << C_RED << e.what() << C_CLEAR << std::endl;
        }
        std::cout << "Print element by Index: '" << arrayChar[836] << "'"
                  << C_CLEAR << std::endl;

    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // **************************** Test 3 ***********************************//
    std::cout << C_GREEN << "<<<- Test3: Test from subject ->>>"
              << C_CLEAR << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try {
        numbers[-2] = 0;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    try {
        numbers[MAX_VAL] = 0;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }
    delete[] mirror;//


    return 0;
}



