##UNRELEASED##

Simple Calculator in C

Project Overview

A basic command-line calculator written in C as a personal learning project during my Holberton Software Engineering course.

The calculator was developed iteratively, adding functionality, testing inputs, identifying issues, and improving the code as I learned new concepts.

Features

- Menu-driven interface using a do...while loop.
- Addition, subtraction, and multiplication.
- Division (planned/in development).
- Accepts two integers for calculations.
- Handles invalid menu selections.
- Allows users to perform multiple calculations or exit.
- Development Progress

1. Initial Calculator Structure

Created the main menu using printf().
Implemented a do...while loop to keep the calculator running.
Used if and else if statements to handle menu selections.
Added an option to exit the program.

2. Adding Calculations

Implemented addition first.
Added subtraction and multiplication using the same structure.
Used scanf() to collect two integers from the user.
Tested calculations with positive and negative numbers.

3. Input Handling Issues

Encountered problems when users entered characters instead of integers.
Discovered that scanf() can fail when input does not match the expected format.
Learned that invalid characters can remain in the standard input buffer (stdin).

4. Fixing Input Problems

Added checks to verify the return value of scanf().
Used a getchar() loop to consume unwanted input until a newline.
Reset the choice variable to -1 at the beginning of each menu loop.
Improved error messages for invalid selections.

5. Testing and Improvements

Tested valid and invalid menu inputs.
Investigated how scanf() handles mixed input such as 1XYZ.
Learned that scanf("%d", &choice) can accept the integer 1 while leaving XYZ in stdin.
Discussed the limitations of input validation and possible future improvements.

Key Learning Outcomes

- Using loops to control program flow.
- Applying conditional statements.
- Declaring and initialising variables.
- Understanding scanf() return values.
- Managing standard input using getchar().
- Debugging problems through incremental testing.
- Improving code through iterative development.

Development Approach

This project follows a simple iterative development process:

Write code → Compile → Test → Identify issues → Fix → Retest

Each improvement builds upon the previous version, helping develop a better understanding of C programming, input handling, and debugging.
