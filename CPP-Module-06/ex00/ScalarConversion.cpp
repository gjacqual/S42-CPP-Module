#include <cstdlib>
#include "ScalarConversion.hpp"

// Constructors
ScalarConversion::ScalarConversion() : _value(0.0) {}

ScalarConversion::ScalarConversion(const std::string &inputString)
        : _inputString(inputString), _value(0.0) {

}

ScalarConversion::ScalarConversion(const ScalarConversion &copy)
        : _inputString(copy._inputString), _value(0.0) {
}

// Destructor
ScalarConversion::~ScalarConversion() {}

// Operators
ScalarConversion &ScalarConversion::operator=(const ScalarConversion &assign) {
    if (this != &assign) {
        _inputString = assign._inputString;
        const_cast<double&>(_value) = assign._value;
    }
    return *this;
}

// Getters / Setters


//Member functions

double ScalarConversion::argToDouble() {
    double value;
    value = std::strtod(_inputString.c_str(), NULL);
    if (value == 0.0 && isChar()) {
        return(static_cast<double>(_inputString[0]));
    }
    return value;
}

void ScalarConversion::detectType() {

    _value = argToDouble();
//    std::cout << _value << std::endl;

//    if (isHasDot()) {
//        if (isFloat())
//            std::cout << std::endl;
////            printToFloat();
//        else
//            std::cout << std::endl;
////            printToDouble();
//    } else if (isChar())
//        printToChar();
//    else
//        std::cout << std::endl;
////        printToInt();
}


bool ScalarConversion::isHasDot() {
    if (_inputString.find('.') != std::string::npos)
        return true;
    return
            false;
}

bool ScalarConversion::isFloat() {
    if (_inputString.find('f') != std::string::npos)
        return true;
    return
            false;
}

bool ScalarConversion::isChar() {
    if (_inputString.length() == 1) {
        const char c = _inputString.c_str()[0];
        if (!std::isdigit(c))
            return true;
    }
    return false;
}

void ScalarConversion::printToChar() {
    std::cout << "char: ";
    try {
        char charValue = toChar();
        std::cout << "'"<< charValue << "'" <<  std::endl;
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

char ScalarConversion::toChar() const {
    const char *str = _inputString.c_str();
    if (std::isinf(str[0]) || std::isnan(str[0]))
        throw ImpossibleConvertException();
    else if (!std::isprint(str[0]))
        throw NonDisplayableCharException();
    return static_cast<char>(str[0]);
}

//int ScalarConversion::toInt() const {
//    int value;
//    try {
//        value = std::stoi(_inputString);
//    } catch(...) {
//        throw ImpossibleConvertException();
//    }
//
//
//    return static_cast<char>(str[0]);
//}




//std::ostream &operator<<(std::ostream &os, const ScalarConversion &conversion) {
//    os << "char: ";
//    try {
//        char charValue = conversion.toChar();
//        os << charValue << std::endl;
//    } catch (const std::exception &e) {
//        os << e.what() << std::endl;
//    }
//
//    return os;
//}
const char *ScalarConversion::NonDisplayableCharException::what() const throw() {
    return ("Non displayable");
}

const char *ScalarConversion::ImpossibleConvertException::what() const throw() {
    return ("impossible");
}

const char *ScalarConversion::InvalidInputException::what() const throw() {
    return ("Error: Invalid Input!");
}
