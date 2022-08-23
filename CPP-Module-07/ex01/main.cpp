#include <iostream>
#include <string>
#include "iter.hpp"

#define C_CLEAR     "\033[0m"
#define C_GREEN     "\033[0;32m"

class Awesome {
public:
    Awesome() : _n(321) {}
    Awesome &operator=(Awesome const&a) { _n = a._n; return *this; }
    bool operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
    bool operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); }
    bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
    bool operator<(Awesome const &rhs) const { return (this->_n < rhs._n); }
    bool operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n); }
    bool operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
private:
    int _n;
};

std::ostream &operator<<(std::ostream &o, const Awesome &a) {
    o << a.get_n();
    return (o);
}

int main() {

    // **************************** Test 1 ***********************************//
    std::cout << C_GREEN << "<<<-Test1: Int->>>"
              << C_CLEAR << std::endl;
    {
        int arrayInt[7] = {1, 2, 3, 4, 5, 6, 7};
        iter(arrayInt, sizeof ( arrayInt ) / sizeof ( *arrayInt ), print);
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // **************************** Test 2 ***********************************//
    std::cout << C_GREEN << "<<<-Test1: String->>>"
              << C_CLEAR << std::endl;
    {
        std::string arrayStr[5] = {"one", "two", "three", "four", "end"};
        iter(arrayStr, sizeof ( arrayStr ) / sizeof ( *arrayStr ), print);
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // **************************** Test 3 ***********************************//
    std::cout << C_GREEN << "<<<-Test1: Double->>>"
              << C_CLEAR << std::endl;
    {
        double arrayDouble[5] = {1.1, 14.23, 0.0, 56.234324, 0.234234324};
        iter(arrayDouble, sizeof ( arrayDouble ) / sizeof ( *arrayDouble ), print);
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // **************************** Test 4 ***********************************//
    std::cout << C_GREEN << "<<<-Test1: Float->>>"
              << C_CLEAR << std::endl;
    {
        float arrayFloat[5] = {1.1f, 14.23f, 0.0f, 56.234324f, 0.234234324f};
        iter(arrayFloat, sizeof ( arrayFloat ) / sizeof ( *arrayFloat ), print);
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // **************************** Test 5 ***********************************//
    std::cout << C_GREEN << "<<<-Test1: Char->>>"
              << C_CLEAR << std::endl;
    {
        char arrayChar[3] = {'^', '|', '_'};
        iter(arrayChar, sizeof ( arrayChar ) / sizeof ( *arrayChar ), print);
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;
    // **************************** Test 5 ***********************************//
    std::cout << C_GREEN << "<<<-Test1: Complex Array->>>"
              << C_CLEAR << std::endl;
    {
        Awesome awesome[6];
        iter(awesome, sizeof ( awesome ) / sizeof ( *awesome ), print);
    }
    std::cout << C_GREEN << "**************************************************"
              << C_CLEAR << std::endl;

    return 0;
}



