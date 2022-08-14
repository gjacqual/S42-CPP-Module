#include <iostream>
#include "Fixed.hpp"

int main(void) {
    std::cout << "\033[0;1;96m****** Subject Example *****\033[0m" << std::endl;

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << "\033[0;1;96m****************************\033[0m" << std::endl;

    std::cout << "\033[0;1;96m********* My Tests *********\033[0m" << std::endl;
    Fixed num1(21);
    Fixed const num2(21);
    Fixed const num3(21.21f);
    Fixed const num4(21.21f);
    Fixed num5(100);
    std::cout << "\033[0;32m<Comparison operators:>\033[0m" << std::endl;
    // "=="
    std::cout << "\033[0;32m\"==\":\033[0m" << " num1=" << num1 << "; "
    << "num2=" << num2  << std::endl;
    std::string result = (num1 == num2) ?
            "num1 equals num2" : "num1 is not equal num2";
    std::cout << "\t" << result << std::endl;
    // "!="
    std::cout << "\033[0;32m\"!=\":\033[0m" << " num1=" << num1 << "; "
              << "num3=" << num3  << std::endl;
    result = (num1 != num3) ?
                         "num1 is not equal num3" : "num1 equals num3";
    std::cout << "\t" << result << std::endl;
    // "<"
    std::cout << "\033[0;32m\"<\":\033[0m" << " num1=" << num1 << "; "
              << "num3=" << num3  << std::endl;
    result = (num1 < num3) ?
             "num1 is smaller then num3" : "num3 is smaller then num1";
    std::cout << "\t" << result << std::endl;
    // ">"
    std::cout << "\033[0;32m\">\":\033[0m" << " num1=" << num1 << "; "
              << "num3=" << num3  << std::endl;
    result = (num3 > num1) ?
             "num3 is bigger then num1" : "num1 is bigger then num3";
    std::cout << "\t" << result << std::endl;
    // "<="
    std::cout << "\033[0;32m\"<=\":\033[0m" << " num1=" << num1 << "; "
              << "num3=" << num3  << "; num4=" << num4 << std::endl;
    result = (num1 <= num3) ?
             "num1 is smaller or equals num3" : "num3 is smaller or equals num1";
    std::cout << "\t" << result << std::endl;
    result = (num4 <= num3) ?
             "num4 is smaller or equals num3" : "num3 is smaller or equals num4";
    std::cout << "\t" << result << std::endl;
    // ">="
    std::cout << "\033[0;32m\">=\":\033[0m" << " num1=" << num1 << "; "
              << "num3=" << num3  << "; num4=" << num4 << std::endl;
    result = (num1 >= num3) ?
             "num1 is bigger or equals num3" : "num1 is smaller num3";
    std::cout << "\t" << result << std::endl;
    result = (num4 >= num3) ?
             "num4 is bigger or equals num3" : "num4 is smaller num4";
    std::cout << "\t" << result << std::endl;

    std::cout << "\033[0;32m<Arithmetic operators:>\033[0m" << std::endl;
    // "+"
    std::cout << "\033[0;32m\"+\":\033[0m" << " num1=" << num1 << "; "
              << "num2=" << num2  << "; num3=" << num3 << std::endl;
    std::cout << "\tResult: num1 + num2 = " << num1 + num2 << std::endl;
    std::cout << "\tResult: num1 + num3 = " << num1 + num3 << std::endl;
    // "-"
    std::cout << "\033[0;32m\"-\":\033[0m" << " num1=" << num1 << "; "
              << "num2=" << num2  << "; num3=" << num3 << std::endl;
    std::cout << "\tResult: num1 - num2 = " << num1 - num2 << std::endl;
    std::cout << "\tResult: num1 - num3 = " << num1 - num3 << std::endl;
    // "*"
    std::cout << "\033[0;32m\"*\":\033[0m" << " num1=" << num1 << "; "
              << "num2=" << num2  << "; num3=" << num3 << std::endl;
    std::cout << "\tResult: num1 * num2 = " << num1 * num2 << std::endl;
    std::cout << "\tResult: num1 * num3 = " << num1 * num3 << std::endl;
    // "/"
    Fixed num0(0);
    std::cout << "\033[0;32m\"/\":\033[0m" << " num1=" << num1 << "; "
              << "num2=" << num2  << "; num3=" << num3 << "; num0="
              << num0 << std::endl;

    std::cout << "\tResult: num1 / num2 = " << num1 / num2 << std::endl;
    std::cout << "\tResult: num1 / num3 = " << num1 / num3 << std::endl;
    try {
        std::cout << "\tResult: num1 / ZERO = " << num1 / num0 << std::endl;
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "\033[0;32m<Increment/decrement operators:>\033[0m" << std::endl;
    // "++num"
    std::cout << "\033[0;32m\"++num\":\033[0m" << " num1=" << num1 << "; "
             << std::endl;
    std::cout << "\t++num1 = " << ++num1 << std::endl;
    std::cout << "\tnum1 = " << num1 << std::endl;
    // "num++"
    std::cout << "\033[0;32m\"num++\":\033[0m" << " num1=" << num1 << "; "
              << std::endl;
    std::cout << "\tnum1++ = " << num1++ << std::endl;
    std::cout << "\tnum1 = " << num1 << std::endl;
    // "--num"
    std::cout << "\033[0;32m\"--num\":\033[0m" << " num1=" << num1 << "; "
              << std::endl;
    std::cout << "\t--num1 = " << --num1 << std::endl;
    std::cout << "\tnum1 = " << num1 << std::endl;
    // "num--"
    std::cout << "\033[0;32m\"num--\":\033[0m" << " num1=" << num1 << "; "
              << std::endl;
    std::cout << "\tnum1-- = " << num1++ << std::endl;
    std::cout << "\tnum1 = " << num1 << std::endl;

    std::cout << "\033[0;32m<max/min methods:>\033[0m" << std::endl;
    // "max"
    std::cout << "\033[0;32m\"max\":\033[0m" << " num1=" << num1 << "; "
              << "num2=" << num5  << std::endl;
    std::cout << "\tResult: max(num1, num5) = " << Fixed::max(num1, num5) << std::endl;
    // "min"
    std::cout << "\033[0;32m\"min\":\033[0m" << " num1=" << num1 << "; "
              << "num2=" << num5  << std::endl;
    std::cout << "\tResult: min(num1, num5) = " << Fixed::min(num1, num5) << std::endl;
    // "const max"
    std::cout << "\033[0;32m\"const max\":\033[0m" << " num2=" << num2 << "; "
              << "num3=" << num3  << std::endl;
    std::cout << "\tResult: const max(num2, num3) = " << Fixed::max(num2, num3) << std::endl;
    // "const min"
    std::cout << "\033[0;32m\"const min\":\033[0m" << " num2=" << num2 << "; "
              << "num3=" << num3  << std::endl;
    std::cout << "\tResult: const min(num2, num3) = " << Fixed::min(num2, num3) << std::endl;
    return 0;
}
