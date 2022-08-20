#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

    // **************************** Test 1 ***********************************//
    std::cout << COLOR_GREEN << "<<<-Test1: Successful writing ASCII trees to file ->>>"
              << COLOR_CLEAR << std::endl;
    {
        try {
            Bureaucrat bureaucrat("Boris", 21);
            std::cout << bureaucrat << std::endl;

            ShrubberyCreationForm first("home");
            std::cout << first << std::endl;



        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }

    }
//    // **************************** Test 2 ***********************************//
//    std::cout << COLOR_GREEN
//              << "<<<- Test 2: Checking Form Low/Height grade exceptions ->>>"
//              << COLOR_CLEAR << std::endl;
//    std::cout << "Form test(\"Doc №21\", 0, 1): ";
//    {
//        try {
//            Form test("Doc №21", 0, 1);
//        } catch (std::exception &e) {
//            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
//        }
//    }
//    std::cout << "Form test(\"Doc №21\", 1, 0): ";
//    {
//        try {
//            Form test("Doc №21", 1, 0);
//        } catch (std::exception &e) {
//            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
//        }
//    }
//    std::cout << "Form test(\"Doc №21\", 151, 150): ";
//    {
//        try {
//            Form test("Doc №21", 151, 150);
//        } catch (std::exception &e) {
//            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
//        }
//    }
//    std::cout << "Form test(\"Doc №21\", 150, 151): ";
//    {
//        try {
//            Form test("Doc №21", 151, 150);
//        } catch (std::exception &e) {
//            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
//        }
//    }



}