#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    // **************************** Test 0 ***********************************//
    std::cout << COLOR_GREEN << "<<<-Test0: Constructors, Copy, Assigment ->>>"
              << COLOR_CLEAR << std::endl;
    {
        ShrubberyCreationForm testForm;
        ShrubberyCreationForm copyForm("test");
        std::cout << "Before: " << std::endl;;
        std::cout << testForm << std::endl;
        std::cout << copyForm << std::endl;

        testForm = copyForm;
        std::cout << "After: " << std::endl;
        std::cout << testForm << std::endl;
        std::cout << copyForm << std::endl;

        std::cout << "Copy Constructor: " << std::endl;;

        ShrubberyCreationForm secondForm(testForm);
        std::cout << secondForm << std::endl;
    }
    // **************************** Test 1 ***********************************//
    std::cout << COLOR_GREEN << "<<<-Test1: Successful writing ASCII trees to file ->>>"
              << COLOR_CLEAR << std::endl;
    {
        try {
            Bureaucrat bureaucrat("Boris", 137);
            std::cout << bureaucrat << std::endl;

            ShrubberyCreationForm firstForm("home");
            std::cout << firstForm << std::endl;

//            firstForm.beSigned(bureaucrat);
//            std::cout << firstForm << std::endl;
//            firstForm.execute(bureaucrat);
            bureaucrat.signForm(firstForm);
            std::cout << firstForm << std::endl;
            bureaucrat.executeForm(firstForm);
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