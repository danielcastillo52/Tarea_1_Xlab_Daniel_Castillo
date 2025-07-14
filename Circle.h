/*
 * This header file declares the Circle class, which is a concrete subclass of the abstract Figure class.
 * It represents a circle defined by its radius.
 * The class provides methods to calculate the area and perimeter of the circle,
 * and a method to print its key attributes including radius and color.
 * Logging is handled via the Logger utility class.
 */
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"
#include "Logger.h"

class Circle:public Figure{
private:
    double radius;

public:
    // Returns the area
    double getArea();
    // Returns the perimeter
    double getPerimeter();
     // Logs the rectangle's properties
    void  printMembers();
    // Constructor that initializes the circle's radius
    Circle(double r);
};


#endif