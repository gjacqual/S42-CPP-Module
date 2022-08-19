#include <iostream>
#include "Bureaucrat.hpp"

int main() {

    // **************************** Test 1 ***********************************//
    std::cout << COLOR_GREEN << "<<<- Constructors Check Test ->>>"
              << COLOR_CLEAR << std::endl;
    {
        try {
            Bureaucrat bureaucrat("Boris", 40);
            Bureaucrat *bureaucrat1 = new Bureaucrat("Gerold", 1);

            std::cout << bureaucrat << std::endl;
            std::cout << *bureaucrat1 << std::endl;

            std::cout << COLOR_YELLOW << "<Copy Constructor>" << COLOR_CLEAR << std::endl;
            Bureaucrat bureaucratCopy(bureaucrat);
            std::cout << bureaucratCopy << std::endl;

            std::cout << COLOR_YELLOW << "<Assigment Constructor>" << COLOR_CLEAR << std::endl;
            Bureaucrat bureaucratAssign;
            bureaucratAssign = bureaucrat;
            std::cout << bureaucratAssign << std::endl;

            delete bureaucrat1;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }
    // **************************** Test 2 ***********************************//
    std::cout << COLOR_GREEN << "<<<- Try to Create Bureaucrat with 0 grade ->>>"
              << COLOR_CLEAR << std::endl;
    {
        try {
            Bureaucrat bureaucrat("Boris", 0);
            Bureaucrat *bureaucrat1 = new Bureaucrat("Gerold", 151);

            std::cout << bureaucrat << std::endl;
            std::cout << *bureaucrat1 << std::endl;
            delete bureaucrat1;
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
    }
    // **************************** Test 3 ***********************************//
    std::cout << COLOR_GREEN << "<<<- Try to Create Bureaucrat with 151 grade ->>>"
              << COLOR_CLEAR << std::endl;
    {
        try {
            Bureaucrat bureaucrat("Boris", 42);
            Bureaucrat *bureaucrat1 = new Bureaucrat("Gerold", 151);

            std::cout << bureaucrat << std::endl;
            std::cout << *bureaucrat1 << std::endl;
            delete bureaucrat1;
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
    }
    // **************************** Test 4 ***********************************//
    std::cout << COLOR_GREEN << "<<<- Try to Increment / Decrement Low grade ->>>"
              << COLOR_CLEAR << std::endl;
    {
        try {
            Bureaucrat bureaucrat("Boris", 150);
            std::cout << bureaucrat << std::endl;

            bureaucrat.incrementGrade();
            std::cout << bureaucrat << std::endl;
            bureaucrat.decrementGrade();
            bureaucrat.decrementGrade();
            std::cout << bureaucrat << std::endl;


        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
    }
    // **************************** Test 5 ***********************************//
    std::cout << COLOR_GREEN << "<<<- Try to Increment / Decrement High grade ->>>"
              << COLOR_CLEAR << std::endl;
    {
        try {
            Bureaucrat bureaucrat("Gerold", 1);
            std::cout << bureaucrat << std::endl;

            bureaucrat.decrementGrade();
            std::cout << bureaucrat << std::endl;
            bureaucrat.incrementGrade();
            bureaucrat.incrementGrade();
            std::cout << bureaucrat << std::endl;

        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
    }
}