/**
 * @file main.cpp
 * @brief Main entry point of the documentation demo project.
 *
 * This program demonstrates the use of Logger and
 * CalculationEngine classes.
 */

#include <iostream>
#include "Logger.h"
#include "CalculationEngine.h"

/**
 * @mainpage Doxygen Documentation Demo
 *
 * @section intro Introduction
 * This project demonstrates how Doxygen generates documentation
 * for a multi-file C++ project.
 *
 * @section features Features
 * - Logging using the Logger class.
 * - Mathematical calculations using CalculationEngine.
 * - Calculation of powers of numbers.
 */

int main() {
    Logger logger(INFO);

    CalculationEngine engine(logger);

    double result = engine.power(2, 3);

    std::cout << "Result: " << result << std::endl;

    return 0;
}