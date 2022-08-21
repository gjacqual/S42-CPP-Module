#ifndef EX00_SCALARCONVERSION_HPP
#define EX00_SCALARCONVERSION_HPP

#include <iostream>
#include <string>
#include <cmath>

//Color Escape Codes

#define C_CLEAR     "\033[0m"
#define C_RED       "\033[1;31m"
#define C_GREEN     "\033[0;32m"
#define C_YELLOW    "\033[0;33m"
#define C_PURPLE    "\033[0;35m"

class ScalarConversion {
public:

    // Constructors
    ScalarConversion();

    ScalarConversion(const std::string &inputString);

    ScalarConversion(const ScalarConversion &copy);

    // Destructor
    ~ScalarConversion();

    // Operators
    ScalarConversion &operator=(const ScalarConversion &assign);

    // Getters / Setters

    const std::string &getInputString() const;

    //Member functions

    double argToDouble();

    void detectType();

    bool isHasDot();

    bool isFloat();

    bool isChar();

    char toChar() const;

    void printToChar();

    int toInt() const;

//    float toFloat() const;

//    double toDouble() const;

    class NonDisplayableCharException : public std::exception {
        const char *what() const throw();
    };

    class ImpossibleConvertException : public std::exception {
        const char *what() const throw();
    };

    class InvalidInputException : public std::exception {
        const char *what() const throw();
    };


private:
    std::string _inputString;
    double _value;
};

std::ostream &operator<<(std::ostream &os, const ScalarConversion &conversion);


#endif //EX00_SCALARCONVERSION_HPP
