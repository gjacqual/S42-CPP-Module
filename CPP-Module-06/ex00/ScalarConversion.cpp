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
        const_cast<double &>(_value) = assign._value;
    }
    return *this;
}

//Member functions

bool ScalarConversion::isChar() {
    if (_inputString.length() == 1) {
        const char c = _inputString.c_str()[0];
        if (!std::isdigit(c))
            return true;
    }
    return false;
}

bool ScalarConversion::isValidInput() const {
    if (_value == 0.0 && !std::isdigit(_inputString[0]) &&
        !std::isdigit(_inputString[1]))
        return false;
    return true;
}

double ScalarConversion::argToDouble() {
    double value;
    value = std::strtod(_inputString.c_str(), NULL);
    if (value == 0.0 && isChar()) {
        return (static_cast<double>(_inputString[0]));
    }
    return value;
}

void ScalarConversion::convert() {

    _value = argToDouble();
    printToChar();
    printToInt();
    printToFloat();
    printToDouble();
}

char ScalarConversion::toChar() const {
    if (_value < std::numeric_limits<char>::min() ||
        _value > std::numeric_limits<char>::max() ||
        std::isinf(_value) || std::isnan(_value))
        throw ImpossibleConvertException();
    else if (!std::isprint(static_cast<int>(_value)))
        throw NonDisplayableCharException();
    return static_cast<char>(_value);
}

int ScalarConversion::toInt() const {
    if (!isValidInput())
        throw ImpossibleConvertException();
    if (_value < std::numeric_limits<int>::min() ||
        _value > std::numeric_limits<int>::max() ||
        std::isinf(_value) || std::isnan(_value))
        throw ImpossibleConvertException();
    return static_cast<int>(_value);
}

float ScalarConversion::toFloat() const {
    if (!isValidInput())
        throw ImpossibleConvertException();
    if (std::isinf(_value))
        return static_cast<float>(_value);
    if (_value < -std::numeric_limits<float>::max() ||
        _value > std::numeric_limits<float>::max())
        throw ImpossibleConvertException();
    return static_cast<float>(_value);
}

double ScalarConversion::toDouble() const {
    if (!isValidInput())
        throw ImpossibleConvertException();
    if (std::isinf(_value))
        return static_cast<double>(_value);
    if (_value < -std::numeric_limits<double>::max() ||
        _value > std::numeric_limits<double>::max())
        throw ImpossibleConvertException();
    return static_cast<double>(_value);
}

void ScalarConversion::printToChar() const {
    std::cout << "char: ";
    try {
        char charValue = toChar();
        std::cout << "'" << charValue << "'" << std::endl;
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void ScalarConversion::printToInt() const {
    std::cout << "int: ";
    try {
        int intValue = toInt();
        std::cout << intValue << std::endl;
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void ScalarConversion::printToFloat() const {
    std::cout << "float: " << std::fixed << std::setprecision(1);
    try {
        float floatValue = toFloat();
        std::cout << floatValue << "f" << std::endl;
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void ScalarConversion::printToDouble() const {
    std::cout << "double: " << std::fixed << std::setprecision(1);
    try {
        double doubleValue = toDouble();
        std::cout << doubleValue << std::endl;
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

const char *ScalarConversion::NonDisplayableCharException::what() const throw() {
    return ("Non displayable");
}

const char *ScalarConversion::ImpossibleConvertException::what() const throw() {
    return ("impossible");
}
