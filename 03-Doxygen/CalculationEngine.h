/**
 * @file CalculationEngine.h
 * @brief Defines the CalculationEngine class.
 */

#ifndef CALCULATION_ENGINE_H
#define CALCULATION_ENGINE_H

#include "Logger.h"

/**
 * @class CalculationEngine
 * @brief Performs mathematical operations.
 *
 * @details This class performs calculations and uses the Logger
 * class to record information about its operations.
 */
class CalculationEngine {
public:

    /**
     * @brief Constructs a CalculationEngine object.
     * @param logger Reference to the Logger object.
     */
    CalculationEngine(Logger& logger);

    /**
     * @brief Calculates the power of a number.
     *
     * @param base The base number.
     * @param exponent The exponent.
     * @return The result of raising base to exponent.
     *
     * @todo Add support for additional mathematical operations.
     */
    double power(double base, int exponent);

private:
    Logger& logger;
};

#endif