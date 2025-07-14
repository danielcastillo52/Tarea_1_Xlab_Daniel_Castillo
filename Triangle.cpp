/*
 * This file implements the Triangle class, which represents a geometric triangle shape.
 * It includes functionality to initialize a triangle with its base, height, and side lengths,
 * calculate its area and perimeter, and print its key properties such as sides, base, height, area, perimeter, and color.
 * The calculations use standard mathematical formulas.
 * Logging of the properties is done through a Logger utility class.
 */
#include "Triangle.h"
// Constructorof the Triangle: initializes the height, base, sideA, sideB,SideC attributes with the provided value
Triangle::Triangle(double h, double ba, double a, double b, double c)
        : height(h), base(ba), sideA(a), sideB(b), sideC(c) {}

// Returns the area of the Triangle
double Triangle::getArea(){
    return 0.5 * (base * height);
}
//Returns the circumference of the Triangle
double Triangle:: getPerimeter() {
    return sideA+ sideB+ sideC;
}

// Prints the Triangle's properties
void Triangle::printMembers(){
    Logger::logArea(std::to_string(getArea()));
    Logger::logPerimeter(std::to_string(getPerimeter()));
    Logger::logMember("Sides: " +std::to_string(sideA) + ", " +std::to_string(sideB) + ", " +std::to_string(sideC));
    Logger::logMember("Base: "+ std::to_string(base));
    Logger::logMember("Height: "+ std::to_string(height));
    Logger::logMember("COlor: "+ (color));
}