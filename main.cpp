/*
 * This file contains the main function that demonstrates the use of polymorphism
 * and smart pointers with geometric figures: Rectangle, Circle, and Triangle.
 * It prompts the user to input valid dimensions and colors for each figure,
 * creates objects dynamically using `unique_ptr`, and logs their attributes
 * such as area, perimeter, dimensions, and color through a Logger utility class.
 */
#include <iostream>
#include <memory>
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "Logger.h"
using namespace std;

// THe method helps to safely read a positive double vaule  from the user
double readPositiveDouble(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        cin >> value;
        //Most be a positive number
        if (cin.fail() || value <= 0) {
            cout << "Invalid number, please enter a positive value." << endl;
            cin.clear();                    //Clear the error flag
            cin.ignore(10000, '\n');
        } else {
            return value;
        }
    }
}

int main() {
    //We declare smart pointers for each type of figure using class Figure
    unique_ptr<Figure> rectPtr;
    unique_ptr<Figure> circlePtr;
    unique_ptr<Figure> trianglePtr;

    //IN this part, defines the inputs of the user
    cout <<"Enter the dimensions for the rectangle:" << endl;
    double width= readPositiveDouble("Width: ");
    double height= readPositiveDouble("Height: ");
    rectPtr= unique_ptr<Rectangle> (new Rectangle(width, height));

    cout <<"Enter the radius for the circle:" << endl;
    double radius= readPositiveDouble("Radius: ");
    circlePtr= unique_ptr<Circle> (new Circle(radius));

    cout <<"Enter the dimensions for the triangle:" << endl;
    double base= readPositiveDouble("Base: ");
    double triHeight= readPositiveDouble("Height: ");
    
    cout <<"Enter the other two sides of the triangle (side A and sideC):" << endl;
    double sideA= readPositiveDouble("Side A: ");
    double sideC= readPositiveDouble("Side C: ");
    //Here assume sideB equals the base
    double sideB= base;

    trianglePtr= unique_ptr<Triangle> (new Triangle(base, triHeight, sideA, sideB, sideC));

    string color;
    cout <<"Color for rectangle: ";
    cin >> color;
    rectPtr->setColor(color);

    cout <<"Color for circle: ";
    cin >> color;
    circlePtr->setColor(color);

    cout <<"Color for triangle: ";
    cin >> color;
    trianglePtr->setColor(color);

    //Logging results

    Logger::log("RECTANGLE:");
    rectPtr-> printMembers();

    Logger::log("CIRCLE:");
    circlePtr-> printMembers();

    Logger::log("TRIANGLE:");
    trianglePtr-> printMembers();

    return 0;
}
