/*
 * This header file declares the abstract base class Figure, which serves as a common interface
 * for all geometric shapes in the application, such as Circle, Rectangle, and Triangle.
 * It defines pure virtual functions for calculating area, perimeter, and printing member attributes.
 * Additionally, it includes a shared `color` attribute, with setter and getter methods.
 * All derived classes must implement the pure virtual methods to be instantiable.
 */
#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>
using namespace std;

class Figure{
protected:
    string color;
public:
    //must be implemented by derived classes
    virtual double getArea()= 0;
    virtual double getPerimeter()= 0;
    virtual void printMembers()= 0;

    //In  FIgure.cpp is also define to update the color variable 
    void setColor(const string& c);

    string& getColor();

};

#endif 