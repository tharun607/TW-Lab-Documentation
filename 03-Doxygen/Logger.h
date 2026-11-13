/**
 * @file Logger.h
 * @brief Defines a simple logging system.
 *
 * This file contains the Logger class and LogLevel enum.
 */

#ifndef LOGGER_H
#define LOGGER_H

/**
 * @enum LogLevel
 * @brief Defines the severity levels for log messages.
 */
enum LogLevel {
    DEBUG,   /**< Detailed debugging information. */
    INFO,    /**< General informational messages. */
    WARNING, /**< Warning messages about potential issues. */
    ERROR    /**< Error messages indicating failures. */
};

/**
 * @class Logger
 * @brief Provides basic logging functionality.
 *
 * The Logger class displays messages with their corresponding
 * severity levels.
 */
class Logger {
public:

    /**
     * @brief Constructs a Logger object.
     * @param level The minimum logging level.
     */
    Logger(LogLevel level);

    /**
     * @brief Logs a message.
     * @param message The message to be displayed.
     */
    void log(const char* message);

private:
    LogLevel level;
};

#endif