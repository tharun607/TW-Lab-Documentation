# Doxygen Documentation

## 1. Introduction to Doxygen

Doxygen is an open-source documentation generator used to create documentation directly from source code.

It extracts information from specially formatted comments written in the code and generates reference documentation.

It supports programming languages such as C, C++, Python and Java.

### Why is Doxygen used?

- Automatically generates documentation from source code.
- Makes code easier to understand and maintain.
- Documents classes, functions, parameters and return values.
- Generates HTML and PDF documentation.

## 2. Doxygen Workflow

The basic workflow for using Doxygen is:

1. Write specially formatted comments in the source code.
2. Create or edit the Doxyfile configuration.
3. Run Doxygen using the configuration file.
4. Open the generated documentation.

```bash
doxygen -g Doxyfile
doxygen Doxyfile
```

The first command creates a configuration file named `Doxyfile`. The second command generates the documentation using that configuration.

## 3. Doxygen Comment Syntax

Doxygen uses specially formatted comments to identify documentation.

A common format in C++ is:

```cpp
/**
 * @brief Brief description of the function.
 *
 * Detailed explanation of the function.
 * @param x Description of the parameter.
 * @return Description of the return value.
 */
int myFunction(int x);
```

The `/** ... */` format tells Doxygen that the comment contains documentation.

## 4. Common Doxygen Commands

| Command | Purpose |
|---|---|
| `@brief` | Provides a short description |
| `@param` | Describes a function parameter |
| `@return` | Describes the return value |
| `@author` | Specifies the author |
| `@version` | Specifies the version |
| `@see` | Refers to related documentation |
| `@note` | Adds an additional note |
| `@class` | Documents a class |
| `@enum` | Documents an enumeration |
| `@file` | Documents a source file |
| `@mainpage` | Creates the main project documentation page |
| `@detail` | Adds a detailed description |

Both `@` and `\` can be used to write Doxygen commands. For example, `@brief` and `\brief` have the same purpose.

## 5. Documenting Classes and Functions

Doxygen can document classes, their constructors, member functions and other elements.

### Example: Documenting a class

```cpp
/**
 * @class Car
 * @brief Represents a car object.
 *
 * Details about the class.
 */
class Car {
public:
    /**
     * @brief Starts the engine.
     * @return True if successful.
     */
    bool startEngine();
};
```

### Documenting function parameters

The `@param` command describes the inputs passed to a function.

The `@return` command describes the value returned by the function.

```cpp
/**
 * @brief Calculates the power of a number.
 * @param base The base value.
 * @param exponent The exponent value.
 * @return The calculated result.
 */
int power(int base, int exponent);
```

## 6. Doxygen Configuration File (Doxyfile)

The Doxyfile is the configuration file that controls how Doxygen generates documentation.

It contains settings such as the project name and the output formats.

For the assignment, the configuration had to generate both HTML and LaTeX output.

Important settings:

```ini
GENERATE_HTML = YES
GENERATE_LATEX = YES
GENERATE_RTF = NO
GENERATE_XML = NO
```

The provided Doxyfile template can be used as the starting point and modified as required.

## 7. Generating Documentation

After completing the Doxygen comments and configuring the Doxyfile, run:

```bash
doxygen Doxyfile
```

This generates the documentation.

### HTML Documentation

The generated HTML documentation can be viewed by opening:

```text
html/index.html
```

It provides a browser-based view of the documented project.

### PDF Documentation

To generate a PDF:

1. Navigate to the generated `latex` directory.
2. Run the command:

```bash
make
```

This generates the PDF documentation from the LaTeX output.

## 8. Assignment 9 – Doxygen

### Objective

Create documentation for a small multi-file C++ project using Doxygen.

### Files provided

The assignment provided the following files:

- `Logger.h` – Defines a simple Logging class.
- `CalculationEngine.h` – Defines a class for mathematical operations that uses the Logger.
- `main.cpp` – Contains the application entry point.
- `Doxyfile` template – Provides a starting configuration for generating documentation.

### Tasks performed

**1. Install Doxygen**

On Ubuntu, Doxygen can be installed using:

```bash
sudo apt install doxygen
```

**2. Complete the source code documentation**

Find the TODO comments and undocumented elements in the provided source files. Add correctly formatted Doxygen comments.

The assignment specifically required:

- **Main page:** Use `\mainpage` or `@file` to define the project overview.
- **Logger class:** Use `@file`, `@class` and `@brief`.
- **Log Level enum:** Use `@enum` and document every enumerator value.
- **Logger constructor:** Document the constructor and its parameters.
- **CalculationEngine class:** Use `@file`, `@class`, `@brief` and `@detail`.
- **CalculationEngine::power:** Add `@param` descriptions for `base` and `exponent`, and an `@return` description. Review the existing `\todo` tag.

**3. Generate HTML and PDF documentation**

- Configure the Doxyfile to generate HTML and LaTeX output.
- Run `doxygen Doxyfile` to generate the documentation.
- Open `html/index.html` to view the HTML documentation.
- Navigate to the generated LaTeX directory and run `make` to generate the PDF.

### Submission requirements

The following files had to be uploaded to Google Classroom:

1. Three completed source files.
2. Final Doxyfile used for generation.
3. Screenshot of the generated HTML documentation.
4. Generated PDF documentation.

## 9. What I Learned

Through this assignment, I learned how to:

- Write specially formatted Doxygen comments in C++.
- Document classes, constructors, enumerations and functions.
- Describe function parameters and return values.
- Configure Doxygen using a Doxyfile.
- Generate HTML and PDF documentation from source code.
- Use automated documentation to make a project easier to understand and maintain.

## 10. References

- Introduction to Documentation Tools: Doxygen & Google Docs – Lecture slides.
- Assignment 9 – Doxygen.
- Official Doxygen Manual: https://www.doxygen.nl/manual/