# Strings
A custom C library implementing a variety of string manipulation functions, including file reading, word and sentence counting, dynamic string transformation, and more. Designed for strings, this project showcases the use of dynamic memory allocation, structured code organization, and robust testing.


# stringMe-String-Functions-Library

Welcome to the `stringMe` custom string functions library. This project is designed to provide a set of C functions for various string manipulations.

## Project Overview

This project includes the implementation of several custom string functions:

- **readFile**: Reads the contents of a file and returns it as a dynamically allocated string.
- **dejaVu**: Counts the number of words and sentences in a given string.
- **goBig**: Stretches a string based on user input, repeating each character by a specified number of times.
- **goAway**: Splits a string into words and stores them in a dynamically allocated 2D array.
- **breathless**: Removes all punctuation from a string.
- **tail**: Prints words from a string, each suffixed by a specified substring.

Each function is implemented with dynamic memory allocation to ensure efficient use of memory.

## File Structure

The project is organized into the following directories:

- `src/`: Contains the source code files (`strings.c`).
- `include/`: Contains the header files (`strings.h`).
- `bin/`: Contains the compiled executable (`stringMe`).

The main testing file is `stringsMain.c`, and the project is compiled using a `Makefile` located at the top level of the directory.

## Compilation and Execution

To compile the project, navigate to the top-level directory and run the following command:

```bash
make

This will generate the stringMe executable in the bin/ directory.

To run the program with an input file, use the following command:

bash
Copy code
./bin/stringMe <filename>
Replace <filename> with the name of the text file you wish to process.

