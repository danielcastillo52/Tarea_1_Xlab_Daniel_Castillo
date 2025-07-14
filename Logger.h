/*
 * This header file declares the Logger utility class, which is responsible for printing
 * formatted information about geometric figures to the console.
 * It includes static methods for logging general messages, shape attributes, area, and perimeter,
 * each prefixed with a timestamp relative to the program's start time.
 * The Logger uses the chrono library to measure elapsed time and format timestamps.
 */
#ifndef LOGGER_H
#define LOGGER_H
#include <iostream>
#include <string>
#include <chrono>
using namespace std;

class Logger{
private:
    //It has to return the current timestamp
    static int getTimestamp();
    // Static start time recorded at program start; shared across all Logger methods
    static chrono::steady_clock::time_point startTime;  
public:
    // Needs to logs a general message with a timestamp
    static void log(const string& message);
    
    //Specific member attribute with a timestamp
    static void logMember(const string& member);
    
    // Logs the area value with a timestamp
    static void logArea(const string& area);
    
    // Logs the perimeter value with a timestamp
    static void logPerimeter(const string& perimeter);
};

#endif