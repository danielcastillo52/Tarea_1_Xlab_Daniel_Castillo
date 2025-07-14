/*
 * This file implements the Rectangle class, which represents a geometric rectangle shape.
 * It includes functionality to initialize a rectangle with a given width and height, calculate its area and perimeter,
 * and print its key properties such as width, height, area, perimeter, and color.
 * The calculations use standard mathematical formulas.
 * Logging of the properties is done through a Logger utility class.
 */
#include "Rectangle.h"
// Constructor of the Rectangle: initializes the width and height attributes with the provided value
Rectangle::Rectangle(double w,double h)
        : width(w),  height(h) {}

// Returns the area of the rectangle
double Rectangle::getArea(){
    return width * height;
}
// Returns the perimeter of the rectangle
double Rectangle:: getPerimeter() {
    return 2* (width + height);
}
// Prints the rectangle's properties
void Rectangle::printMembers(){
    Logger::logArea(std::to_string(getArea()));
    Logger::logPerimeter(std::to_string(getPerimeter()));
    Logger::logMember("Width: "+ std::to_string(width));
    Logger::logMember("Height: "+ std::to_string(height));
    Logger::logMember("Color: "+ (color));
}