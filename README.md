Student Grade Calculator

Author: Roberto Naranjo
Language: C++

Overview

This console program asks the user to enter exam scores for eight students. Each exam is worth 150 points. It validates each score, converts scores to percentages, assigns letter grades, and displays a table of student results. It also calculates the total and average raw score.

Features

Accepts eight student scores through the keyboard.

Checks for invalid inputs and scores outside the range of 0 to 150.

Converts raw scores to percentages using score * 2 / 3.

Assigns grades using the following scale:

Percentage

Grade

90–100

A

80–under 90

B

70–under 80

C

60–under 70

D

Under 60

F

Prints a formatted table and the sum and average of all eight raw scores.

How to Run

Open the .cpp file in a C++ IDE, or use a compiler such as g++.

Compile the program:

g++ "Roberto Naranjo A2.cpp" -o grades

Run the program:

./grades

Enter a score between 0 and 150 when prompted for each student.

If an input is invalid, the program prints an error message and stops. Restart it to try again.

C++ Concepts Practiced

double and char variables

Keyboard input with cin and console output with cout

Conditional statements (if and else if)

Input validation using cin.fail()

Arithmetic calculations

Output formatting with <iomanip>, setw, fixed, and setprecision

