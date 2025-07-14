/*
 * This source file implements the Logger utility class, which is used to print timestamped
 * logs for geometric figures. The logs include general messages, figure attributes,
 * area, and perimeter. A static start time is recorded when the program begins,
 * and all logs are shown with the elapsed time in seconds since that point.
 */

#include <iostream>
#include "Logger.h"
#include <chrono>
using namespace std;
// It starts the static start Time when the Logger class is first loaded
chrono::steady_clock::time_point Logger::startTime = chrono::steady_clock::now();

// Needs to return the number of seconds elapsed since the begging
int Logger::getTimestamp() {
    auto now = chrono::steady_clock::now();
    auto elapsed = chrono::duration_cast<chrono::seconds>(now - startTime).count();
    return static_cast<int>(elapsed);
}

//Logsa message with timestamp
void Logger::log(const string& message){
    cout <<"[ " << getTimestamp() << " ]" << message <<endl;
}

void Logger::logMember(const string& member){
    cout << "--> [ " << getTimestamp() << " ]" << member <<endl;
}

void Logger::logArea(const string& area){
    cout << "< A > [ " << getTimestamp() << " ]" << area <<endl;
}

void Logger::logPerimeter(const string& perimeter){
    cout << "< P > [ " << getTimestamp() << " ]" << perimeter <<endl;
}