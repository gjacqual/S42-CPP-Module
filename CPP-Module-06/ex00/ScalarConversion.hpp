#ifndef EX00_SCALARCONVERSION_HPP
#define EX00_SCALARCONVERSION_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <limits>
#include <iomanip>

//Color Escape Codes

#define C_CLEAR     "\033[0m"
#define C_RED       "\033[1;31m"
#define C_YELLOW    "\033[0;33m"

class ScalarConversion {
public:

    // Constructors
    ScalarConversion();

    explicit ScalarConversion(const std::string &inputString);

    ScalarConversion(const ScalarConversion &copy);

    // Destructor
    ~ScalarConversion();

    // Operators
    ScalarConversion &operator=(const ScalarConversion &assign);

    //Member functions

    double argToDouble();

    void convert();

    bool isChar();

    bool isValidInput() const;

    void printToChar() const;

    void printToInt() const;

    void printToFloat() const;

    void printToDouble() const;

    char toChar() const;

    int toInt() const;

    float toFloat() const;

    double toDouble() const;

    class NonDisplayableCharException : public std::exception {
        const char *what() const throw();
    };

    class ImpossibleConvertException : public std::exception {
        const char *what() const throw();
    };

private:
    std::string _inputString;
    double _value;
};

#endif //EX00_SCALARCONVERSION_HPP
