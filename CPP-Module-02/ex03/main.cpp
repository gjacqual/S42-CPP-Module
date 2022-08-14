#include <iostream>
#include "Point.hpp"

int main(void) {
    std::cout << "\033[0;1;96m*** Binary space partitioning **\033[0m" << std::endl;

    //vertices of a triangle
    Point a(12.55f, 5.64f);
    Point b(11.78f, 1.55f);
    Point c(2.98f, 2.35f);

    std::cout << "Vertices of a triangle: " << "a: " << a << "b: " << b << "c: "
              << c << std::endl;
    //Test Operator=
    Point point1; // 0.0
    std::cout << "Init Point: " << point1 << std::endl;
    Point point2(8.4f, 3.55f);

    Point pointOut(2.32, 13.55);
    Point pointOnVertex(c);
    point1 = point2;
    std::cout << "Point inside triangle: " << point1 << "point is inside?" << std::endl;
    std::string result;
    result = bsp(a, b, c, point1) ? "Yes" : "No";
    std::cout << result << std::endl;
    std::cout << "Point outside triangle: " << pointOut << "point is inside?" << std::endl;
    result = bsp(a, b, c, pointOut) ? "Yes" : "No";
    std::cout << result << std::endl;
    std::cout << "Point on Vertex: " << pointOnVertex << "point is inside?" << std::endl;
    result = bsp(a, b, c, pointOnVertex) ? "Yes" : "No";
    std::cout << result << std::endl;
    std::cout << "\033[0;1;96m*** Check the condition if the point lies on the side **\033[0m" << std::endl;
    Point aSimple(3.55f, 7.0f);
    Point bSimple(13.55f, 0.0f);
    Point cSimple(3.55f, 0.0f);
    std::cout << "Vertices of a triangle: " << "a: " << aSimple << "b: " << bSimple << "c: "
              << cSimple << std::endl;
    Point pointOnSide(3.55f, 3.0f);
    Point pointOnSidePlus(3.56f, 3.0f);
    Point pointOnSideMinus(3.54f, 3.0f);
    std::cout << "Point on the side of triangle: " << pointOnSide << "point is inside?" << std::endl;
    result = bsp(aSimple, bSimple, cSimple, pointOnSide) ? "Yes" : "No";
    std::cout << result << std::endl;
    std::cout << "pointOnSide(x + 0.01): " << pointOnSidePlus << "point is inside?" << std::endl;
    result = bsp(aSimple, bSimple, cSimple, pointOnSidePlus) ? "Yes" : "No";
    std::cout << result << std::endl;
    std::cout << "pointOnSide(x - 0.01): " << pointOnSideMinus << "point is inside?" << std::endl;
    result = bsp(aSimple, bSimple, cSimple, pointOnSideMinus) ? "Yes" : "No";
    std::cout << result << std::endl;
    //Check the results here -  https://planetcalc.com/8108/
    std::cout << "Check the results here -  \033[0;1;96mhttps://planetcalc.com/8108/\033[0m" << std::endl;
    return 0;
}
