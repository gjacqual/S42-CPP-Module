#include <iostream>
#include <string>

#include "whatever.hpp"
#define C_CLEAR     "\033[0m"
#define C_GREEN     "\033[0;32m"


class Awesome {
public:
    Awesome(void) : _n(0) {}
    Awesome(int n) : _n(n) {}
    Awesome &operator=(Awesome &a) { _n = a._n; return *this; }
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
    std::cout << C_GREEN << "<<<-Test1: From Subject->>>"
              << C_CLEAR << std::endl;
    {
        int a = 2;
        int b = 3;

        ::swap(a, b);
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
        std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

        std::string c = "chaine1";
        std::string d = "chaine2";

        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
        std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
        std::cout << C_GREEN << "**********************************************"
                  << C_CLEAR << std::endl;
        std::cout << std::endl;
    }
    // Expected output:
    //a = 3, b = 2
    //min(a, b) = 2
    //max(a, b) = 3
    //c = chaine2, d = chaine1
    //min(c, d) = chaine1
    //max(c, d) = chaine2
    // **************************** Test 2 ***********************************//
    std::cout << C_GREEN << "<<<-Test2: Complex types->>>"
              << C_CLEAR << std::endl;
    {
        Awesome a(2), b(4);

        swap(a,b);
        std::cout << a << " " << b << std::endl;
        std::cout << max(a,b) << std::endl;
        std::cout << min(a,b) << std::endl;
    }
    // **************************** Test 3 ***********************************//
    std::cout << C_GREEN << "<<<-Test2: If the two of them are equal->>>"
              << C_CLEAR << std::endl;
    {
        Awesome a(42), b(42);

        Awesome *ptrA = &a;
        Awesome *ptrB = &b;
        std::cout << "Address A: " << ptrA << "; Address B: " << ptrB << std::endl;
        swap(a,b);
        std::cout << a << " " << b << std::endl;
        std::cout << max(a,b) << std::endl;
        std::cout << "Address MAX: " <<  &(max(a,b)) << std::endl;
        std::cout << min(a,b) << std::endl;
        std::cout << "Address MIN: " <<  &(min(a,b)) << std::endl;
    }
    return 0;
}
