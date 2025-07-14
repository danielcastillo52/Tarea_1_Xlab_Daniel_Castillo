/*
 * This header file declares the Triangle class, which is a concrete subclass of the abstract Figure class.
 * It represents a triangle defined by its base, height, and the lengths of its three sides.
 * The class provides methods to calculate the area and perimeter of the triangle,
 * and a method to print its key attributes including sides, base, height, and color.
 * Logging is handled via the Logger utility class.
 */
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"
#include "Logger.h"

class Triangle:public Figure{
private:
    double height;
    double base;
    double sideA;
    double sideB;
    double sideC;

public:
    // Returns the area
    double getArea();
    // Returns the perimeter
    double getPerimeter();
     // Logs the rectangle's properties
    void  printMembers();
    // Constructor that initializes height, base, and all three sides.
    Triangle(double h, double ba, double a, double b, double c);
};

#endif