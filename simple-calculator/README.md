# Simple Calculator Project of Jack Brincat for Holberton

The intent of this project is to create a simple calculator as an exmaple of acquired knowledge of C scripting, and demonstrable proof of ability to follow instructions and provide an end product that meets all requirements.


## The basic requirements are:
- Design a small, complete C program from requirements
- Menu driven
- User friendly


## The scripting requirements are:
- All work is to be unique to you, no copying from other sources or students
- Limited to stdio, stdlib, string, and ctype libraries from C.
- Primary input is to be read with scanf
- Implement all operators: +, -, /, and *


# Documentation of progress
The following compiler flags are required for this project:
- gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator


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
