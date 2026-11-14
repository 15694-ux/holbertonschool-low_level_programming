# Simple Calculator Project for Holberton
## Authored by Jack Brincat, completed as at 15/11/2026

The intent of this project is to create a simple calculator as an exmaple of acquired knowledge of C scripting, and demonstrable proof of ability to follow instructions and provide an end product that meets all requirements.

## Operational instructions
This is a very basic calculator that can be used to execute simple mathematic arithmetic.  
Operations available are restricted to + (Addition), - (Subtraction), * (Multiplication), and / (Division).  
Inputs are restricted to two numbers with a single operator. (eg. 25 + 25, 10 - 5, 32 / 4, etc.)  
User input will repeat upong inputting Y/y after an operation completes.  
Program will end if input after operation completes is anything but Y/y.  

## Current Limitations
Program will cease if an alpha input is entered.  
Sums are limited to 2 inputs with a single operator.  

## Potential Future Additions
Alpha character detection and clearing to prevent program ending upon alpha input.  
Multiple value inputs beyond 2 to allow for more complicated arithmetic.  
Programming for Standard Order of Operations to follow accepted rules in relation to +, -, *, and /. (PEMDAS)  

## Basic Operational Requirements
- Design a small, complete C program from requirements
- Menu driven
- User friendly


## Scripting Requirements
- All work is to be unique to you, no copying from other sources or students
- Limited to stdio, stdlib, string, and ctype libraries from C.
- Primary input is to be read with scanf
- Implement all operators: +, -, /, and *


# Documentation of Progress
The following compiler flags are required for this project:
- gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Order of Updates
The following is the order in which I made decisions and changes to the program.  
To the best of my recollection as I got a bit too focused and didn't really stop once I started)

- Started with the title of the program "Simple Calculator".

- Working with <stdio> exclusively.

- Short explanation followed by Author notation with name and date.

- Description of program components.

- Initiate main, assign variables.

- Started with an initial idea of using if / else statements with a menu for each option.

- Switched over to a single input request using switch to lessen the bloat of if / else in the program.

- Used a default function to return ti primary operations if it detects any non-specified operators defined by case.

- Added in a safety net for dividing by 0. It will ouput a sum as 0.000000 and return to primary program operations.

- To allow for repeated inputs following a completed operation I added a while loop that will return operations to input in the even of Y or y being input.
