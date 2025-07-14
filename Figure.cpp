/*
 * This file implements the base Figure class, which provides common functionality for all geometric shapes.
 * It includes a color attribute that can be set or retrieved by derived classes.
 * This base class is intended to be inherited by specific shapes such as Circle, Rectangle, and Triangle.
 */
#include "Figure.h"

//In this method sets the color of the figure using a constant string reference
void Figure::setColor(const string& c){
    color = c;
}
//Returns a reference to the current color
string& Figure::getColor(){
    return color;
}