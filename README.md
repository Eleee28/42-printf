<p align="center">
  <img src="https://github.com/ayogun/42-project-badges/blob/main/badges/ft_printfm.png" alt="printf badge"/>
</p>

<h1 align="center">
 42 Printf
</h1>

<!-- # 42_printf -->

Statement of the project (in [Spanish](es.subject.pdf) / [English](en.subject.pdf))

## Introduction

This project aims to recreate the functionality of the `printf` function from the C standard library (`<stdio.h>`). The goal is to implement this function using variadic arguments, providing support for various format specifiers and handling different types of data.

## Project Objectives

- Understand and implement variadic functions in C.

- Handle different format specifiers to print various data types.

- Manage multiple flags and their combinations for formatting output.

## Variadic Functions and Arguments

Variadic functions are functions that accept a variable number of arguments. In C, this is achieved using the `stdarg.h` library, which provides macros to handle the arguments.

### Key Macros

- `va_list` : A type to hold the information needed to retrieve the additional arguments.

- `va_start` : Initializes a `va_list` variable to retrieve the additional arguments.

- `va_arg` : Retrieves the next argument in the list.

- `va_end` : Cleans up the `va_list` variable.

## Mandatory part

### Function Prototype

The prototype of the function is the following:

```c
int	ft_printf(const char *str, ...);
```

### Supported Format Specifiers

The `ft_printf` function must handle the following format specifiers:

| Specifier | Description |
| --------- | ----------- |
| '%c'      | Prints a single character |
| '%s'      | Prints a string |
| '%p'      | Prints a pointer in hexadecimal format |
| '%d'      | Prints a decimal (base 10) number |
| '%i'      | Prints an integer in base 10 |
| '%u'      | Prints an unsigned decimal (base 10) number |
| '%x'      | Prints a number in hexadecimal (base 16) lowercase format |
| '%X'      | Prints a number in hexadecimal (base 16) uppercase format |
| '%c'      | Prints a single character |
| '%%'      | Prints a percent sign |

## Bonus part

The bonus part extends the functionality to handle various flags for formatting:

### Supported Flags

| Flags | Description |
| ----- | ----------- |
| '-' | Right-padding with spaces |
| '0' | Left-padding with zeroes |
| '.' | Indicates precision |
| '#' | Adds "0x" to a hexadecimal number |
| ' ' | Adds a space before a positive number |
| '+' | Adds a sign (+/-) before a number |

### Format

The general format for the `ft_printf` function with flags is:

```bash
%[flags][width][.precision]type
```

## Implementation Steps

1. **Parsing the Format String**: Identify and extract format specifiers and flags from the input string.

2. **Handling Variadic Arguments**: Use va_list to manage a variable number of arguments passed to the function.

3. **Implementing Specifiers**: Write functions to handle each format specifier, converting the arguments to their respective string representations.

4. **Managing Flags**: Implement the logic to handle different flags and apply them to the formatted output.

5. **Combining Results**: Construct the final output string by combining the processed arguments and print it.
