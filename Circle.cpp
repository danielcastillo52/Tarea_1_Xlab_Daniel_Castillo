/*
 * this file implements the Circle class, which represents a geometric circle shape.
 * It includes functionality to initialize a circle with a given radius, calculate its area and perimeter,
 * and print its key properties such as radius, area, perimeter, and color.
 * The calculations use standard mathematical constants and formulas.
 * Logging of the properties is done through a Logger utility class.
 */
#include "Circle.h"
#include <cmath>
// Constructorof the Circle: initializes the radius attribute with the provided value
Circle::Circle(double r)
        : radius(r){}

// Returns the area of the circle
double Circle::getArea(){
    return M_PI* radius * radius;
}

//Returns the circumference of the circle
double Circle:: getPerimeter() {
    return 2 * M_PI * radius;
}

// Prints the circle's properties
void Circle::printMembers(){
    Logger::logArea( std::to_string(getArea()));
    Logger::logPerimeter( std::to_string(getPerimeter()));
    Logger::logMember("Radius: "+ std::to_string(radius));
    Logger::logMember("Color: "+ (color));
}