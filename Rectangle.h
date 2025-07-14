/*
 * This header file declares the Rectangle class, which is a concrete subclass of the abstract Figure class.
 * It represents a rectangle defined by its width and height.
 * The class provides implementations for calculating the area and perimeter,
 * as well as a method to print its key attributes. It also uses the Logger utility
 * to display information about the rectangle.
 */
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"
#include "Logger.h"

class Rectangle:public Figure{
private:
    double height;
    double width;

public:
    // Returns the area
    double getArea();
    // Returns the perimeter
    double getPerimeter();
     // Logs the rectangle's properties
    void  printMembers();
    // Constructor that initializes width and height
    Rectangle(double w, double h);
};

#endif